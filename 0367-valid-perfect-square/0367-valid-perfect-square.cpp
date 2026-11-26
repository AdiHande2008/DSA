class Solution {
public:
    bool isPerfectSquare(int n) {
        int low=0,high=n,ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid < n){
                low=(int)mid+1;
            }
            else if(mid*mid > n) high=(int)mid-1;
            else return true;
        }
        return false;
    }
};