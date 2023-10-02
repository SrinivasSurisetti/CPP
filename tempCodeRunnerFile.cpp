#include <bits/stdc++.h>
using namespace std;
class Youtube
{
public:   
    string owner_name;
    string channel_name;
    string playlist;
    int subscribers=0;
    void inc_sub(){
        subscribers++;
    }
    void dec_sub(){
        if(subscribers>0){
            subscribers--;
        }
    }
};
class Channel: public Youtube
{
public:
    Channel(string nm,string ch){
        owner_name=nm;
        channel_name=ch;
    }
    void increase_sub(){
        inc_sub();
    }
    void set_playlist(string pl){
        playlist=pl;
    }
    void get_playlist(){
        cout<<playlist<<endl;
    }
    void channelinfo(){
        cout<<"Creator Name is : "<<owner_name<<endl;
        cout<<"Channel Name is : "<<channel_name<<endl;
        cout<<"Number of subscribers he/she had is : "<<subscribers<<endl;
        cout<<playlist<<endl;
    }
    
};
int main(){
    Channel u1("Dhanunjay","Dhanu_Vlogs");
    u1.increase_sub();
    u1.increase_sub();
    u1.inc_sub();
    u1.dec_sub();
    u1.set_playlist("Vlog 234");
    u1.channelinfo();

}