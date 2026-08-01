#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int>& nums, int i, vector<int>& ans, vector<vector<int>> &allsubsets){
    if(i==nums.size()){
        allsubsets.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    subsets(nums, i+1, ans, allsubsets);
    ans.pop_back();
    int idx=i+1;
    while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++;
    subsets(nums, idx, ans, allsubsets);


}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> allsubsets;
    vector<int> ans;
    subsets(nums, 0, ans, allsubsets);
    return allsubsets;
}
int main(){
    vector<int> arr = {1,2,2};
    vector<vector<int>> ans = subsetsWithDup(arr);
    for(auto subset: ans){
        for(int val: subset){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}