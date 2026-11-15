class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int temp=0,count=0;
        for(int i=0;i<nums.size();i++){
            temp=temp^nums[i];
        }
        temp=temp^k;
        if(temp==0) return 0;
        while(temp!=0){
            temp=temp&(temp-1);
            count++;
        }
        return count;
    }
};