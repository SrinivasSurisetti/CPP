#include <bits/stdc++.h>
using namespace std;
class Human{ 
public: 
	Human(){
		cout<<" Parent constructor"<<endl;
	}
	~Human(){
		cout<<"Parent destructor"<<endl;
	}
};
class Student:public Human
{
public:
	Student(){
		cout<<"Child constructor"<<endl;
	};
	~Student(){
		cout<<"Child destructor"<<endl;
	}
	
};
int main()
{
	Student rt;

}
// In inheritance parent constructor is called first and then child class constructor
// but coming to destructor first destructor is called from child and then from parent