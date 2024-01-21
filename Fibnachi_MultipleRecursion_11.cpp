#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    // int last = 0;
    // int slast = 1;
    if(n<=1) return n;  //This cond works when n==0,1
    int last = fib(n-1);
    int slast = fib(n-2);
    return last + slast;
}
int main() {
    int n;
    cin>>n;
    int res = fib(n);
    cout<<res;
} //T(c) = 2^n