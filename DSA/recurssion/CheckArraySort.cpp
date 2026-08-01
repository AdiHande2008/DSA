#include<iostream>
#include<vector>
using namespace std;
bool sorted(int n,vector<int> arr){
    if (n == 0 || n == 1)
    {
        return true;
    }
    return arr[n-1] >= arr[n-2] && sorted(n-1 , arr);
}
int main(){
    vector<int> arr = {2,3,4,8,0,44};
    cout<<sorted(arr.size(), arr);
}