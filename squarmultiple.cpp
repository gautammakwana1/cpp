#include<iostream>
using namespace std;
class square
{
    public:
    int i,n;
    void getdata()
    {
        cout<<"Enter a number :";
        cin>>n;
    }
    void setdata()
    {
        for(i=1;i<=n;i++)
        {
            cout<<"\n"<<i;
            cout<<"\t"<<i*i;
        }
    }
};
class derived : public square
{
    public:
    void display()
    {
        cout<<"\nThank You";
    }
};
int main()
{
    derived x;
    x.getdata();
    x.setdata();
    x.display();
}