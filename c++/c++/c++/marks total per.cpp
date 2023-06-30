#include<iostream>
using namespace std;
int main()
{
    int sci,ac,ba,t;
    float per;
    cout<<"enter a sci marks:";
    cin>>sci;
    cout<<"enter a ac marks:";
    cin>>ac;
    cout<<"enter a ba marks:";
    cin>>ba;
    t=sci+ac+ba;
    per=t/3;
    cout<<"t marks:"<<t;
    cout<<"\nper:"<<per;
}
