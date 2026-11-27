class Solution {
public:
    long long totaldiv(vector<int>& arr,int n,int divisor){
        long long total=0;
        for(int i=0;i<n;i++){
            total+=(arr[i]+divisor-1LL)/divisor;
        }
        return total;
    }
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();
        int low=1,ans=-1,high=arr[0];
        for(int i=1;i<n;i++){
            high=max(high,arr[i]);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(totaldiv(arr,n,mid)>threshold) low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};