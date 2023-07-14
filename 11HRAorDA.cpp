#include<iostream>
using namespace std;
int main()
{
    float gross,hra,da;
    int basic;
    cout<<"Enter your basic salary ";
    cin>>basic;
    if(basic<5000)
    {
        hra=basic*0.08;
        da=basic*0.2;
    }
    if(basic<=10000)
    {
        hra=basic*0.12;
        da=basic*0.3;
    }
    if(basic<=15000)
    {
        hra=basic*0.15;
        da=basic*0.4;
    }
    if(basic>15000)
    {
        hra=basic*0.2;
        da=basic*0.5;
    }
    gross=basic+hra+da;
    cout<<"\nHRA is :"<<hra;
    cout<<"\nDA is :"<<da;
    cout<<"\nGROSS is :"<<gross;
}