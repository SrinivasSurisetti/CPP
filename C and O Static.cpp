#include<iostream>
using namespace std;
class Cinema{
	public:	
		int s;
		float r;
		string h;
		Cinema(){
			cout<<"Default Constructor"<<endl;
		}
		Cinema(string hero,int shows,float rating) { //pararmeterised constructer
			this->h=hero;
			this->r=rating;
			this->s=shows;
	}
	static string MaheshBabu,PawanKalyan;
	void display() {
		cout<<s<<" "<<r<<" "<<h<<endl;
		cout<<MaheshBabu<<" "<<PawanKalyan<<endl;
	}
};
string Cinema::MaheshBabu="Prince";
string Cinema::PawanKalyan="Power";
int main() {
	Cinema c1("RAM",141,9.1);
	Cinema c2("PRABHAS",3451462,8.9);
	Cinema c; //Default object
	c1.display();
	c2.display();
}

