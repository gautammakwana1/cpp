#include<iostream>
using namespace std;
int main()
{
    int guj,eng,stat,total;
    float per;
    char grade;
    cout<<"Enter gujarati marks :";
    cin>>guj;
    cout<<"Enter English marks :";
    cin>>eng;
    cout<<"Enter state marks :";
    cin>>stat;
    total=guj+eng+stat;
    per=total/3;
    cout<<"\n";
    cout<<"Your total is :"<<total;
    cout<<"\n";
    cout<<"Your percentage is :"<<per;
    cout<<"\n";
    if(per<35)
    {
        cout<<"You are fail";
    }
    else if(per>35 && per<=45)
    {
        cout<<"Your grade is : D";
    }
    else if(per>45 && per<=60)
    {
        cout<<"Your grade is : C";
    }
    else if(per>60 && per<=75)
    {
        cout<<"Your grade is : B";
    }
    else if(per>75 && per<=90)
    {
        cout<<"Your grade is : A";
    }
    else
    {
        cout<<"Your grade is : A+";
    }
}