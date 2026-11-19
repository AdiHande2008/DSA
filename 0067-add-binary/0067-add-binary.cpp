class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans = "";

        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            ans = char((sum & 1) + '0') + ans;
            carry = sum >> 1;
        }

        if (carry) {
            ans = '1' + ans;
        }

        return ans;
    }
};