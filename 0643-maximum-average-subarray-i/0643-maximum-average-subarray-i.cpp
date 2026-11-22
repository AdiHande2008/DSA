class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(k==0) return 0;
        
        double maxsum=0,sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxsum=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
            maxsum=max(maxsum,sum);
        }
        return maxsum/k;
    }
};