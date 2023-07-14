#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age :";
    cin>>age;
    if(age<18)
    {
        cout<<age<<" You are not eligible for voting ";
    }
    else
    {
        cout<<age<<" You are eligible for voting";
    }
}