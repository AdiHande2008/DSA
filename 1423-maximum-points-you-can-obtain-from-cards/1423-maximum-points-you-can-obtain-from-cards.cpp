class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=cardPoints[i];
        }
        if(k==n) return totalsum;
        int windowlength = n-k;
        int windowsum=0;
        int minSum=totalsum;
        for(int i=0;i<n;i++){
            windowsum+=cardPoints[i];
            if(i>=windowlength) windowsum-=cardPoints[i-windowlength];
            if(i>=windowlength-1) minSum=min(minSum,windowsum);
        }
        return totalsum-minSum;
    }
};