#include<bits/stdc++.h>
using namespace std;
void insertion(int n,int *ar){
    for(int i=1;i<=n-1;i++){
        for(int j=i;j>=1;j--)
        if(ar[j]<ar[j-1]){
            int temp = ar[j-1];  
            ar[j-1] = ar[j];   
            ar[j] = temp;  
        }
    }
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(auto &i : ar){
        cin>>i;
    }
    insertion(n,ar);
    for(auto i : ar){
        cout<<i<<" ";
    }
}