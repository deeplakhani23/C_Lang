#include<iostream>
using namespace std;
class Test{
    int m,n;
    public:
    void setn();
    void getn(){
        cout<<"value of n :"<<n<<endl;
    }
};
void Test :: setn(){
    cout<<"Enter n :";
    cin>>n;
}
int main(){
    Test a[5];
    int i;
    for(i=0;i<2;i++){
        cout<<"No :"<<i+1<<endl;
        a[i].setn();
    }
    for(i=0;i<2;i++){
        cout<<"No :"<<i+1<<endl;
        a[i].getn();
    }
}