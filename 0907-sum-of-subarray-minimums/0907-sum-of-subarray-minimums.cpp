class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long sum=0;
        int n=arr.size();
        stack<int> s;
        vector<int> nse(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                    s.pop();
                }
                if(!s.empty()) nse[i]=s.top();
                else nse[i]=n;
                s.push(i);
        }
        
        while(!s.empty()) s.pop();   
        
        vector<int> pse(n);
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>arr[i]){
                    s.pop();
                }
                if(!s.empty()) pse[i]=s.top();
                else pse[i]=-1;
                s.push(i);
        }
        int m = (int)1e9 + 7;
        for(int i=0;i<n;i++){
            long long pro = (long long)(nse[i]-i)*(i-pse[i]);
            sum=(sum+pro*arr[i])%m;
        }
        return sum;
    }
};