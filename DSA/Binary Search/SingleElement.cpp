#include <iostream>
#include <vector>
using namespace std;
int single(vector<int> &n)
{
    int st = 0, end = n.size() - 1;
    if (n.size() == 1)
    {
        return n[0];
    }
    else
    {
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (mid == 0 && n[mid] != n[mid + 1])
            {
                return n[mid];
            }
            if (mid == end && n[mid] != n[mid - 1])
            {
                return n[mid];
            }
            if (n[mid - 1] != n[mid] && n[mid + 1] != n[mid])
            {
                return n[mid];
            }
            if (mid % 2 == 0)
            {
                if (n[mid - 1] == n[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            {
                if (n[mid - 1] == n[mid])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> n = {1, 1, 3, 3, 4, 5, 5};
    cout << "single element is: " << single(n);
}
