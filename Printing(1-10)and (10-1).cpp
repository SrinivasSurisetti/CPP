#include<bits/stdc++.h>
using namespace std;
void print(int i) {
	if (i>10) return;
	cout<<i<<endl;
	print(i+1);
}
int main() {
	print(1);
}
