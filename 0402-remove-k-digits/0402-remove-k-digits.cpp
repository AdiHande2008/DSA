class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> s;
        for(int i=0;i<num.size();i++){
            while(k!=0 && !s.empty() && s.top()>num[i]){
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while(!s.empty() && k!=0){
            s.pop();
            k--;
        }
        string ans="";
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        while(ans!="" && ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        if(ans=="") return "0";
        return ans;
    }
};