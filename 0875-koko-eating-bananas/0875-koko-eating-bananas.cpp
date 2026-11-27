class Solution {
public:
    long long timetoeat(vector<int>& arr,int n, int speed){
        long long totalhrs=0;
        for(int i=0;i<n;i++){
            totalhrs+=(arr[i]+speed-1LL)/speed;
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& arr, int h) {
        int n=arr.size();
        int high=arr[0];
        for(int i=1;i<n;i++){
            high=max(high,arr[i]);
        }
        int low=1,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(timetoeat(arr,n,mid)>h) low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};