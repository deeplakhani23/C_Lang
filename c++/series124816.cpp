#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter number";
    cin>>n;
    for(i=1;i<=n;i*=2)
    {
        cout<<i;
        cout<<" ";
    }
}