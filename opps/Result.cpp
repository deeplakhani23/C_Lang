#include<iostream>
#include<iomanip>
using namespace std;
class result{
    private:
    int english,gujrati,maths,total;
    float per;
    public:
    void setter(){
        cout<<"Enter a english marks : ";
        cin>>english;
        cout<<"Enter a gujrati marks : ";
        cin>>gujrati;
        cout<<"Enter a maths marks : ";
        cin>>maths;
        tod();
    }
    void tod(){
        total = english + gujrati + maths;
        per = (float)total/3;
    }
    void getter(){
        cout<<"\n";
       // cout<<"value of english :"<<english<<endl;
        //cout<<"value of gujrati :"<<gujrati<<endl;
        //cout<<"value of maths :"<<maths<<endl;
        //cout<<"value of total :"<<total<<endl;
        //cout<<"value of per :"<<setprecision(4)<<per<<endl;
        cout<<"english\tgujrati\tmaths\ttotal\tper"<<endl;
        cout<<english<<"\t"<<gujrati<<"\t"<<maths<<"\t"<<total<<"\t"<<setprecision(4)<<per;
    }
};
int main(){
    result p;
    p.setter();
    p.getter();
}