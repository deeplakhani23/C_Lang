#include<iostream>
#include<iomanip>
using namespace std;
class Result{
    public:
    int rno,eng,maths,sci,total;
    char name[10];
    float per;
    Result()
    {
        cout<<"Enter Roll Number :";
        cin>>rno;
        cout<<"Enter a Name :";
        cin>>name;
        cout<<"Enter English marks :";
        cin>>eng;
        cout<<"Enter Maths marks :";
        cin>>maths;
        cout<<"Enter science marks :";
        cin>>sci;

        calcul();
    }
    void calcul(){
        total = eng + maths + sci;
        per = (float)total/3;

        disp();
    }
    void disp(){
        cout<<"Roll Number is :"<<rno<<endl;
        cout<<"Name is :"<<name<<endl;
        cout<<"English marks is :"<<eng<<endl;
        cout<<"Maths marks is :"<<maths<<endl;
        cout<<"Science marks is :"<<sci<<endl;
        cout<<"Total is :"<<total<<endl;
        cout<<"Percenteg is :"<<setprecision(4)<<per<<endl;
    }
};
int main(){
    Result r;
}
