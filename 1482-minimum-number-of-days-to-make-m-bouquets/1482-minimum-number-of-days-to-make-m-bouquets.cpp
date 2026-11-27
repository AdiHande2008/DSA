class Solution {
public:
    int countBouquet(vector<int>& arr,int n, int k, int day){
        int count=0,bouquet=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                count++;
                if(count==k){
                    bouquet++;
                    count=0;
                }
            }
            else count=0;
        }
        return bouquet;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        int ans=-1;
        if(1LL*k*m > n) return ans;
        int low=arr[0],high=arr[0];
        for(int i=1;i<n;i++){
            low=min(low,arr[i]);
        }
        for(int i=1;i<n;i++){
            high=max(high,arr[i]);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(countBouquet(arr,n,k,mid) >= m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};