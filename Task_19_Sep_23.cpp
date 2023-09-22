#include<bits/stdc++.h>
using namespace std;
class Youtube{
    public:
    string channel_name;
    string owner_name;
    int subscribers;
    string playlist[100];
    int j=0;
        Youtube() {
            this->channel_name="T Hub";
            this->owner_name="Babji neelam";
            this->subscribers=0;
            this->playlist="Placement Course";
        }
        void youtube(string channel,string admin) {
            this->channel_name=channel;
            this->owner_name=admin;
        }
        void display();
        void add_subscribe(int n){
            this->subscribers=n;
        }
        void un_subscribe() {
            if(subscribers>0) {
                    subscribers--;
                }
        }
        void add_playlist(string videos) {
            playlist[j]=videos;
            j++;
        }
};
void Youtube::display(){
        cout<<"Hello...My channel name is "<<channel_name<<endl;
        cout<<"I'm "<<owner_name;
        cout<<"and i have "<<subscribers<<" Subscribers"<<endl;
        for(int k=0;k<=j;k++) {
             cout<<"Look at my "<<playlist[k]<<" playlists"<<endl;
        }

}

int main(){
    Youtube c1,c2;
    c1.add_playlist("Py");
    c1.display();
    // c2.youtube("Jenny lectures","Jenny");
    // c2.add_subscribe(10);
    // for(int j=1;j<=9;j++) {
    //     c2.un_subscribe();
    // }
    // c2.add_playlist("CPP ");
    // c2.display();
}