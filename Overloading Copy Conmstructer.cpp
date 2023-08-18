#include<iostream>
using namespace std;
	class Student {
		public:
			string na,name;
			int roll; 
			double p;
		Student() { //DEFAULT CONSTRUCTER 
			name="Gopal";
			roll=7;
		}
		Student(double per,string na="45") { //Overloaded here
			this->p=per;
			this->na=na;
		}
		Student(int roll,string name) { //PARAMETERISED CONSTRUCTER
			this->roll=roll;
			this->name=name;
		}
		Student (Student &s){ //COPY CONSTRUCTER
			this->name=s.name;
			this->roll=s.roll;
		}
		inline display() { 
			cout<<name<<" "<<roll<<endl;
		}
		inline di()
		{
			cout<<p<<" "<<na<<" "<<endl;
		}
	};
int main() {
	Student s1;
	Student s2(18,"UDAY");
	Student s3(s1);
	Student s4(78.9);
	s1.display();
	s2.display();
	s3.display();
	s4.di();
}

