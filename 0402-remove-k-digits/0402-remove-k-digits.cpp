class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() == k) return "0";
        
        string st = "";
        
        for (char c : num) {
            while (!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        
        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }
        
        int startIdx = 0;
        while (startIdx < st.size() && st[startIdx] == '0') {
            startIdx++;
        }
        
        string res = st.substr(startIdx);
        return res.empty() ? "0" : res;
    }
};