#include<iostream>
using namespace std;
class College{
	public:
		int roll;
		string campus,name;
		float per;
		static string inst;
		static void age(){
			cout<<"18"<<" "<<inst<<endl;
		}		
		College(int Rollnum,string Name,string Campus,float Per); //Signature
		void display();//signature
};
College::College(int Rollnum,string Name,string Campus,float Per) {
		roll=Rollnum;
		campus= Campus;
		name=Name;
		per=Per;
}
string College::inst="ADITYA";
void College :: display() { //Defining Signature
	cout<<roll<<" "<<name<<" "<<campus<<" "<<per<<endl;
}	
int main() {
	College c1(21,"RAM","ACOE",89.2);
	College c2(23,"DADHA","AEC",90.3);
	c1.display();
	c2.display();
	c2.age();
}
