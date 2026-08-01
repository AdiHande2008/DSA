#include<iostream>
#include<vector>
using namespace std;
int binsearch(vector<int> arr, int str , int end , int trg){
    if (str <= end)
    {
        float mid = str + (end - str)/2;
        if (arr[mid] == trg)
        {
            return mid;
        }
        else if (arr[mid] < trg)
        {
            return binsearch(arr, mid + 1, end, trg);
        }
        else 
        {
            return binsearch(arr, str, mid - 1, trg);
        }   
    }
    return -1;
}
int search(vector<int> arr, int trg) {
    return binsearch(arr, 0, arr.size()-1, trg);
}

int main(){
    vector<int> arr = {2,6,24,45,54,65,68,75};
    cout<<search(arr, 24);
    return 0;
}