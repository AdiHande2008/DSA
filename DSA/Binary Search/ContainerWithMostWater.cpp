#include<iostream>
#include<vector>
using namespace std;//Two pointer Approach
int water(vector<int>& arr){
    int sp=0, lp=arr.size()-1;
    int maxwater = 0;
    while (sp<lp)
    {
        int w = lp-sp;
        int h = min(arr[sp], arr[lp]);
        int currwater = w*h;
        maxwater = max(maxwater,currwater);
        arr[sp]<arr[lp]?sp++:lp--;
    }
    return maxwater;
}
int main(){
    vector<int>arr = {1,8,6,2,5,4,8,3,7};
    cout<<"Area of biggest container is: "<<water(arr)<<endl;
}