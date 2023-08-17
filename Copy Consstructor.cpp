#include<iostream>
using namespace std;
	class Student {
		public:
			string name;
			int roll; 
		Student() { //DEFAULT CONSTRUCTER 
			this->name="Gopal";
			this->roll=7;
		}
		Student(int roll,string name) { //PARAMETERISED CONSTRUCTER
			this->roll=roll;
			this->name=name;
		}
		Student (Student &s){ //COPY CONSTRUCTER
			this->name=s.name;
			this->roll=s.roll;
		}
		display() {
			cout<<name<<" "<<roll<<endl;
		}
	};	
int main() {
	Student s1;
	Student s2(18,"UDAY");
	Student s3(s1);
	s1.display();
	s2.display();
	s3.display();
//	s4.display();
}

