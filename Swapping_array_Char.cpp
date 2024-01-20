#include<bits/stdc++.h>
using namespace std;
void rev(string &str,int i){
    if(i>=str.size()/2) {
        cout<<"TRUE";
        return;
    }
    if(str[i]!=str[str.size()-i-1]){
        cout<< "FALSE";
        return;
    }
    return rev(str,i+1);
}
int main(){
    string str;
    getline(cin,str);
    rev(str,0);
}