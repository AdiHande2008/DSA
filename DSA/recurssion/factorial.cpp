#include<iostream>
using namespace std;
int call(int n){
    if (n == 0)
    {
        return 1;
    }
    return n*call(n-1);
}
int main(){
    cout<<call(5);
}