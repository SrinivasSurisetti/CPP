#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int gcd=min(a,b);
    while(a%gcd!=0 or b%gcd!=0){
        gcd--;
    }
    cout<<gcd;
}