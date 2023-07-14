#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a value :";
    cin>>a;
    cout<<"Enter b value :";
    cin>>b;
    cout<<"Enter c value :";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" Is largest";
    }
    else{
        cout<<c<<" Is largest";
    }
    if(b>a && b>c)
    {
        cout<<b<<" Is largest";
    }
    else 
    {
        cout<<c<<" Is largest";
    }
}