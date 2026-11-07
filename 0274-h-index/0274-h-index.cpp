class Solution {
public:
    int hIndex(vector<int>& projects) {
        sort(projects.begin(),projects.end());
        int n=projects.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(projects[n-i-1] >= i+1){
                ans++;
            }
        }
        return ans;
    }
};