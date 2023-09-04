#include<bits/stdc++.h>
using namespace std;
class Student  {
    public:
        string name;
        int age;
};
class Teacher {
    public:
        string subject;
        int id;
};
class Principal:public Student,public Teacher {
    public:
        void dis(string name,int age,string subject,int id) {
                this->age=age;
                this->id=id;
                this->name=name;
                this->subject=subject;
    }
    void print() {
        cout<<name<<" "<<age<<" "<<subject<<" "<<id<<endl;
    }
};
int main() {
    Principal s;
    s.dis("Gopal",432,"OS",42312);
    s.print();
}