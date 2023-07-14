#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter your x value :";
    cin>>x;
    cout<<"Enter your y value :";
    cin>>y;
    if(x<2000 || x>3000)
    {
        cout<<x<<" X value is printed";
    }
    if(y>100 && y<500)
    {
        cout<<y<<" Y value iss printed";
    }
}