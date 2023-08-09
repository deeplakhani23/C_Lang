#include<iostream>
using namespace std;
int main()
{
    int i,n,x=1,z;
    cout<<"Enter number :";
    cin>>n;
    for(i=1;i<n;i*=2)
    {
        z=x*i;
        cout<<z;
        cout<<" ";
        x++;
    }
}