class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int bitsum=0;
            for(int num:nums){
                bitsum+=(num>>i)&1;
            }
            int bit=bitsum%3;
            ans |= (bit<<i);
        }
        return ans;
    }
};