class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0,two=0;
        for(int num:nums){
            one^=(num&~two);
            two^=(num&~one);
        }
        return one;
    }
};