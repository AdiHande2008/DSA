class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int> s;
        int n = arr.size();
        vector<int> nse(n);
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            nse[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        while (!s.empty())
            s.pop();
        vector<int> pse(n);
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }
            pse[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        int ans = -1;
        for (int i = 0; i < n; i++) {
            ans = max(ans, (nse[i] - pse[i] - 1) * arr[i]);
        }
        return ans;
    }
};