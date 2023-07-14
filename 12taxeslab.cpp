#include<iostream>
using namespace std;
int main()
{
    int income;
    float tax,net;
    cout<<"Enter your income :";
    cin>>income;
    if(income<=2500)
    {
        tax=0;
        cout<<"Tax is :"<<tax;
    }
    if(income>2500 && income<=5000)
    {
        tax=(income-2500)*0.1;
        cout<<"Tax is :"<<tax;
    }
    if(income>5000 && income<=10000)
    {
        tax=(250+((income-5000)*0.2));
        cout<<"Tax is :"<<tax;
    }
    if(income>10000)
    {
        tax=250+1000+((income-10000)*0.3);
        cout<<"Tax is :"<<tax;
    }
    net=income-tax;
    cout<<"\n Your net income is :"<<net;
}