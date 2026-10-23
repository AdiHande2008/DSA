class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        stack<int> s;
        int n=arr.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i]<s.top()){
                s.pop();
            }
            
            if(s.empty()) ans[i]=arr[i];
            else ans[i]=arr[i]-s.top();
            s.push(arr[i]);
        }
        return ans;
    }
};