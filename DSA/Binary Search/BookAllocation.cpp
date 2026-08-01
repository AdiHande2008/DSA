#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &arr, int n, int m, int maxAllocation)
{
    int stu = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllocation)
        {
            return false;
        }
        if (pages + arr[i] <= maxAllocation)
        {
            pages += arr[i];
        }
        else
        { 
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}
int books(vector<int> &arr, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int st = 0, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(arr, n, m, mid))
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    
}
int main(){
    vector<int> arr={2,6,3,5,8,9,4,1};
    cout<<books(arr,8,6);
}