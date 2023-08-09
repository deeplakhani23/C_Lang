#include <iostream>
using namespace std;
class Student {
    private:
    char name[30];
    int rollNo,eco,ba,eng,total;
    float per;
 
    public:
    void getStudent()   
        {
        cout<<"Enter rollno :";
        cin>>rollNo;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter eco marks :";
        cin>>eco;
        cout<<"Enter ba marks :";
        cin>>ba;
        cout<<"Enter eng marks :";
        cin>>eng;
        total=eco+ba+eng;
        per=float(total)/3;
    }
 
    void showStudent() {
       
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "eco marks : " << eco << endl;
        cout << "ba marks : " << ba << endl;
        cout << "eng marks : " << eng << endl;
        cout << "total marks : " << total << endl;
        cout << "per : " << per << endl;
    }
 
};
int main() {
   
    Student s[5];
    for (int i = 0; i <2; i++) {
        s[i].getStudent();
    }
     cout << "Student Details are" << endl;
    for (int i = 0; i <2; i++) {
        s[i].showStudent();
    }
 }