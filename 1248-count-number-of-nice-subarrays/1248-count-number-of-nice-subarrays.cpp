class Solution {
public:
    long long atmostSum(vector<int>& arr, int k){
        if(k<0) return 0;
          int sum=0,i=0;
          long long ans=0;
          for(int j=0;j<arr.size();j++){
              sum+=arr[j];
              while(sum>k){
                  sum-=arr[i];
                  i++;
              }
              ans+=(j-i+1);
              
          }
        return ans;
    }
    int numberOfSubarrays(vector<int>& arr, int k) {
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = arr[i] % 2;
        }
        return atmostSum(arr, k) - atmostSum(arr, k - 1);
    }
};