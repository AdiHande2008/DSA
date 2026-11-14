class Solution {
public:
    bool isPowerOfTwo(int N) {
        if(N<=0) return false;
        return (N&(N-1))==0;
    }
};