#include<iostream>
using namespace std;
int call(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }
    return call(n-1) + call(n-2);
}
int main(){
    cout<<call(7);
}