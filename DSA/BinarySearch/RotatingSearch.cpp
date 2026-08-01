#include<vector>
#include<iostream>
using namespace std;
int search(vector<int>& A, int tar) {
        int st = 0, end = A.size()-1;
        while(st <= end){
            int mid= st + (end - st)/2;
            if(A[mid] == tar){
                return mid;
            }
            if(A[st] <= A[mid]){//left sorted
                if(A[st] <= tar && tar <= A[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
            else{//right sorted
                if(A[end] >= tar && tar >= A[mid]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }

        }
        return -1;
    }
int main(){
    vector<int> A= {4,5,6,7,0,1,2};
    cout<<"Target is located at index: "<<search(A, 5)<<endl;
}