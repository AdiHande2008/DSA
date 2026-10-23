class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n=arr.size();
        stack<int> s;
        vector<int> ans(n,-1);
        for(int i=2*n-1;i>=0;i--){
            while(!s.empty() && arr[i%n] >= s.top()){
                s.pop();
            }
            if(i<n && !s.empty()){
                ans[i]=s.top();
            }
            s.push(arr[i%n]);
        }
        return ans;
    }
};