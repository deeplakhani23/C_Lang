#include<iostream>
using namespace std;
int main()
{
    int unit;
    float bill,sur_charge;
    cout<<"Enter useble units :";
    cin>>unit;
    if(unit<=100){
        bill=50 + unit * 0.60;
    }else if(unit<=300){
        bill = 50 + 60 + (unit-100)* 0.80;
    }else{
         bill = 50 + 60 + 100 + (unit-300)* 0.80;
    }cout<<"your bill amount is :"<<bill;
    if(bill>300){
        sur_charge +bill *0.15;
        bill = bill + sur_charge;
        cout<<"\nyour sur charge is :"<<sur_charge;
        cout<<"\nyour final bill is :"<<bill;
    }
}