class Solution {
public:
    int mySqrt(int n) {
        int low=0,high=n,ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid <= n){
                ans=(int)mid;
                low=(int)mid+1;
            }
            else high=(int)mid-1;
        }
        return ans;
    }
};