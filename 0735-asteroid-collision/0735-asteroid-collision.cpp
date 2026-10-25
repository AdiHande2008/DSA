class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> s;
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]>0) s.push(arr[i]);
            else{
                while(!s.empty() && s.top()>0 && abs(arr[i]) > s.top()){
                    s.pop();
                }
                if(s.empty() || s.top()<0){
                    s.push(arr[i]);
                }
                else if(s.top()+arr[i] == 0){
                    s.pop();
                }
            }
            i++;
        }
        vector<int> ans(s.size());
        int j=s.size()-1;
        while(!s.empty()){
            ans[j]=s.top();
            s.pop();
            j--;
        }
        return ans;
    }
};