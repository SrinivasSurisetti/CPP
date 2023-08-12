#include<iostream>
using namespace std;
class College{
	public:
		int roll;
		string campus,name;
		float per;
		College(int Rollnum,string Name,string Campus,float per) {
			roll=Rollnum;
			campus= Campus;
			name=Name;
			per=per;
		}
		void display();
};
void College :: display() {
	cout<<roll<<" "<<name<<" "<<campus<<" "<<per<<endl;
}	
int main() {
	College c1(21,"RAM","ACOE",89.2);
	College c2(23,"DADHA","AEC",90.3);
}
