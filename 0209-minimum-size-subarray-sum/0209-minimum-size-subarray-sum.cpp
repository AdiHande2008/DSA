class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,minlen=INT_MAX,j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                minlen=min(minlen, i-j+1);
                sum=sum-nums[j];
                j++;
            }
        }
        if(minlen==INT_MAX) return 0;
        return minlen;
    }
};