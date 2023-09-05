// #include<bits/stdc++.h>
// using namespace std;
// class Persion {
//     public:
//         int age;
//         string name;
//     public :


// }
// class Student : protected Persion {
// public :
//     Persion::SetName;
//     Persion::Setage;
//     Persion::age;
//     int id ;
//     string college;
//     void SetID(int data) {
//         id = data
//     }
// }
// int main() {

// }

#include <bits/stdc++.h>
using namespace std;
class Human{ //Base class
public:
	string name;
	int age;
public:
	void SetName(string na){
		name=na;
	}
	void SetAge(int val){
		age=val;
	}
};
class Student :protected Human //Derived class
{
public:
	using Human::name;
	using Human::age;
	using Human::SetAge;
	using Human::SetName;
	int id;
	void SetId(int val){
		id=val;
	}
	/*void SetData(string n, int ag, int va){  // public method, cause members in parent class became protected when they entered child class 
		name=n;
		age=ag;
		id=va;
	}*/
	void Display(){
		cout<<name<<" "<<age<<" "<<endl;
	}
};
int main(){
	Student s1,s2;
	s1.SetName("gopl");
	s1.SetAge(22);
	//s1.SetData("srinu",32,667);
	s1.Display();
	//s2.SetData("Ram",34,499);

}
// To access protected members from a derived class we write a public method.
// here we have inherited SetName,SetAge from parent class called Human but they became protected as we inhertied protectedlyṇ
