#include<bits/stdc++.h>
using namespace std;
// Polymorphism
// Compilw time poly
// Fxn Overloading
class Complex{
    private:
        int x,y;
	public:
	// THE OPERATORS WHICH ARE NOT OVERLOADED--->scope resolution , terninary(single line statements) 
        Complex(int i=0,int j=0) {
            x=i;
            y=j;
        }
        void print() {
            cout<<x<<"+"<<y<<"i"<<endl;
        }
        Complex operator +(Complex &c2) {
            Complex temp;
            temp.x=c2.x+x;
            temp.y=c2.y+y;
            return temp;
        }
};
int main() {
    Complex c1(3,5);
    Complex c2(2,43);
    c1.print();
    c2.print();
    Complex c3;
    c3=c1+c2;
    c3.print();
}