#include<iostream>
using namespace std;
class test{
    int testcode,nocandidate,centerReqd;
    string description;
    int calcent(){
        return(nocandidate/100+1);
    }
    public:
    void schedule()
    {
        cout<<"Enter test code:";
        cin>>testcode;
        cout<<"Description:";
        cin>>description;
         cout<<"No. of candidate:";
        cin>>nocandidate;
        centerReqd = calcent();
    }
    void disptest()
    {
        cout<<"Test code is:"<<testcode<<endl;
        cout<<"Description:"<<description<<endl;
        cout<<"All Candidate:"<<nocandidate<<endl;
        cout<<"Center Required:"<<centerReqd;
    }
};
int main(){
    test t;
    t.schedule();
    t.disptest();
}
