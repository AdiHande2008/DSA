#include<iostream>
#include<vector>
using namespace std;
void permu(vector<int>& nums, int idx, vector<vector<int>> &ans){
    if(idx==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idx; i<nums.size(); i++){
        swap(nums[i], nums[idx]);
        permu(nums, idx+1, ans);
        swap(nums[i], nums[idx]);
    }


}
vector<vector<int>> allpermu(vector<int>& nums) {
    vector<vector<int>> ans;
    permu(nums, 0, ans);
    return ans;
}
int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans = allpermu(arr);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}