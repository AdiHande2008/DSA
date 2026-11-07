class Solution {
public:
    string convert(string s, int num) {
        int n=s.size();
        if (num == 1 || num >= n) {
            return s;
        }
        string ans="";
        int cycle=2*num-2;
        for(int i=0;i<num;i++){
            for(int j=i;j<n;j+=cycle){
                ans+=s[j];
                int diagonal = j+cycle-2*i;
                if(i!=0 && i!=num-1 && diagonal<n){
                    ans+=s[diagonal];
                }
            }
        }
        return ans;
    }
};