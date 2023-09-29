#include<bits/stdc++.h>
using namespace std;
int main() {
    pair<int,int> p ={1,2};
    cout<<p.first<<endl;
    pair<int, pair<char,char>> pi = {3, {'e','r'}};
    cout<<pi.first<<" "<<pi.second.first<<endl;
    pair<int,int> ar[]={{1,2},{3,6}};
    cout<<ar[2].second;
}