#include<iostream>
using namespace std;
class bank{
    int bal;
    string name;
    public:
    static int a;
    void setdata(int bal ,string name)
    {
        this ->bal =bal;
        this ->name =name;
        a++;
    }
    static int mem()
    {
        return a;
    }
    void getdata()
    {
        cout<<"Your name is :"<<name<<endl;
        cout<<"Your balance is :"<<bal<<endl;
    }
};
int bank :: a;
int main()
{
    cout<<"inital stage :"<<bank::mem()<<endl;
    bank b,c,a;
    b.setdata(1500,"skill");
    a.setdata(1500,"skill");    
    c.setdata(1500,"skill");
    cout<<"Final stage :"<<bank::mem()<<endl;
}