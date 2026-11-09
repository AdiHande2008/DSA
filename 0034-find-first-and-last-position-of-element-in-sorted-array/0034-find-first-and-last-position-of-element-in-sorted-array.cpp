class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int k) {
        int str=0,end=arr.size()-1,first=-1,last=-1;
        vector<int> ans;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(arr[mid]==k){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]>k) end=mid-1;
            else str=mid+1;
        }
        str=0,end=arr.size()-1;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(arr[mid]==k){
                last=mid;
                str=mid+1;
            }
            else if(arr[mid]>k) end=mid-1;
            else str=mid+1;
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};