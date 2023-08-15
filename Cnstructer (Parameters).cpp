#include<iostream>
using namespace std;
class Cinema{
	public:
		
		int s;
		float r;
		string h;
		Cinema(string hero,int shows,float rating) {
			h=hero;
			s=shows;
			r=rating;
		}
};
int main() {
	Cinema c1("RAM",141,7.8);
	Cinema c2("PRABHAS",3451462,8.9);
	cout<<c1.h;
}

////////_____________USING THIS-> AND DISPLAY__________________________////////

//#include<iostream>
//using namespace std;
//class Cinema{
//	public:	
//		int s;
//		float r;
//		string h;
//		Cinema(){ //Defalt constructer
//			cout<<"Default Constructor"<<endl;
//		}
//		Cinema(string hero,int shows,float rating) { //Parameterised constructer
//			this->h=hero;
//			this->r=rating;
//			this->s=shows;
//	}
//	void display() {
//		cout<<s<<" "<<r<<" "<<h<<endl;
//	}
//};
//int main() {
//	Cinema c1("RAM",141,9.1);
//	Cinema c2("PRABHAS",3451462,8.9);
//	Cinema c; //Default object
//	c1.display();
//	c2.display();
//}
