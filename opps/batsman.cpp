#include<iostream>
using namespace std;
class batsman{
    int bcode,innings,notout,runs,batavg;
    char bname[20];
    float calcavg(){
        batavg=runs/(innings-notout);
    }
    public:
    void readdata(){
        cout<<"Enter Batsman Code :";
        cin>>bcode;
        cout<<"Enter Batsman Name :";
        cin>>bname;
        cout<<"Enter played Innings :";
        cin>>innings;
        cout<<"Enter Notout Innings :";
        cin>>notout;
        cout<<"Enter Batsman Runs  :";
        cin>>runs;
        calcavg();
    }
    void displaydata(){
        cout<<"Batsman Code : "<<bcode<<endl;
        cout<<"Batsman Name : "<<bname<<endl;
        cout<<"Played Inning : "<<innings<<endl;
        cout<<"Notout Inning : "<<notout<<endl;
        cout<<"Bastman Runs : "<<runs<<endl;
        cout<<"Average : "<<batavg<<endl;

    }
};
int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}