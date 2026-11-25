class Solution {
public:
    bool isodd(int x) {
        if (x % 2 == 0)
            return false;
        return true;
    }
    int numberOfSubarrays(vector<int>& arr, int k) {
        long long ans = 0;
        int oddcount = 0, i = 0, validStarts = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (isodd(arr[j])) {
                oddcount++;
                validStarts = 0;
            }
            while (oddcount == k) {
                validStarts++;
                if (isodd(arr[i]))
                    oddcount--;
                i++;
            }
            ans += validStarts;
        }
        return ans;
    }
};