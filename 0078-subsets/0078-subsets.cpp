class Solution {
public:
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=arr.size();
        for(int i=0;i<(1<<n);i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                if(i&(1<<j)) temp.push_back(arr[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};