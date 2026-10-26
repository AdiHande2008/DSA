class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        stack<int> s;
        int n=arr.size();
        
        vector<int> nse(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()] >= arr[i]) s.pop();
            if(s.empty()) nse[i] = n;
            else nse[i]=s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        vector<int> pse(n);
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()] > arr[i]) s.pop();
            if(s.empty()) pse[i] = -1;
            else pse[i]=s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        vector<int> nge(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()] <= arr[i]) s.pop();
            if(s.empty()) nge[i] = n;
            else nge[i]=s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        vector<int> pge(n);
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()] < arr[i]) s.pop();
            if(s.empty()) pge[i] = -1;
            else pge[i]=s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=1LL*((nge[i]-i)*(i-pge[i])-(nse[i]-i)*(i-pse[i]))*arr[i];
        }
        return sum;
    }
};