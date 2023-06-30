#include<iostream>
using namespace std;
class student{
    int admno;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal(){
        return eng+sci+maths;
    }
    public:
    void taketada(){
        cout<<"Enter Admin no :";
        cin>>admno;
        cout<<"Enter name :";
        cin>>sname;
        cout<<"Enter maths marks :";
        cin>>maths;
        cout<<"Enter science marks :";
        cin>>sci;
        cout<<"Enter english marks :";
        cin>>eng;
        total=ctotal();
    }
    void showdata(){
        cout<<"Admin no : "<<admno<<endl;
        cout<<"Nmae : "<<sname<<endl;
        cout<<"Maths marks : "<<maths<<endl;
        cout<<"Science marks : "<<sci<<endl;
        cout<<"English marks : "<<eng<<endl;
        cout<<"Total marks : "<<total<<endl;
    }
};
int main()
{
    student s;
    s.taketada();
    s.showdata();
}
