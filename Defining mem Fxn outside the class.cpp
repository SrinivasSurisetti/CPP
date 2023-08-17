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
		Cinema(string hero,int shows,float rating); //Signature for Class
		void display(); //Signature 
};
void Cinema::display() { //<return type> <class Name> :: <fxn name>
	cout<<s<<" "<<r<<" "<<h<<endl; //Definig outside the class 
}
Cinema::Cinema(string hero,int shows,float rating){ //Defining outside the class(constructer).HERE CLASS HAS NO RETURNTYPE SO WE USE CLASS NAME.
		this->h=hero;
		this->r=rating;
		this->s=shows;
}
int main() {
	Cinema c1("RAM",141,9.1);
	Cinema c2("PRABHAS",3451462,8.9);
	Cinema c; //Default object
	c1.display();
	c2.display();
}
