class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0) {
            int q=n, r,sum=0;
            while(q>0) {
                r=q%2;
               q=q/2;
              sum=sum+r;
              if(sum>1) break;
            }
        if(sum==1) return true;
        else return false;
        }
        else return false;
    }
};