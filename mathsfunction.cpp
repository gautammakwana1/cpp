#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Ans is :"<<ceil(2.8)<<endl;
    cout<<"Ans is :"<<ceil(-2.2)<<endl;
    cout<<"Ans is :"<<floor(2.8)<<endl;
    cout<<"Ans is :"<<floor(-2.2)<<endl;
    cout<<"Ans is :"<<round(2.5)<<endl;
    cout<<"Ans is :"<<round(-2.2)<<endl;
    cout<<"Ans is :"<<sqrt(16)<<endl;
    cout<<"Ans is :"<<sqrt(5)<<endl;
    cout<<"Ans is :"<<abs(-5)<<endl;
    cout<<"Ans is :"<<abs(2.5)<<endl;
    cout<<"Ans is :"<<rand()%100<<endl;
    //cout<<"Ans is :"<<pow(2.5)<<endl;

    int a,b,c;
    a=rand()%99;
    b=rand()%50;
    c=rand()%10;

    cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b<<endl;
    cout<<"value of c :"<<c<<endl;
}