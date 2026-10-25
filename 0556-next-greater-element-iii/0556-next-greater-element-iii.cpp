class Solution {
public:
    int nextGreaterElement(int n) {
        string nums=to_string(n);
        int i=nums.size()-1;
        while(i>0 && nums[i]<=nums[i-1]){
            i--;
        }
        if(i==0) return -1;
        int j=nums.size()-1;
        while(nums[j] <= nums[i-1]){
            j--;
        }
        swap(nums[j],nums[i-1]);
        reverse(nums.begin()+i, nums.end());
        long long ans=stoll(nums);
        if(ans>INT_MAX) return -1;
        return ans;
    }
};