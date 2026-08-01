#include <iostream>
#include <vector>
using namespace std;
int find(vector<int> &n)
{
    int st = 1, end = n.size() -2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (n[mid] > n[mid + 1] && n[mid] > n[mid - 1])
        {
            return mid;
        }
        if(n[mid - 1] < n[mid]){
            st = mid +1;
        }
        else{
            end = mid - 1;
        }
    }
    
}
int main(){
    vector<int> n={1,2,3,5,6,5,4,2,1};
    cout<<"Peak value is in index: "<<find(n)<<endl;
}