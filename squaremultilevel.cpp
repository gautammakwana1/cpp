#include<iostream>
using namespace std;
class square
{
    protected:
    int n;
    public:
    void getdata()
    {
        cout<<"Enter a number :";
        cin>>n;
    }
};
class calculation : public square
{
    protected:
    int i;
    public:
    void setdata()
    {
        for(i=1;i<=n;i++)
        {
            cout<<"\n"<<i;
            cout<<"\t"<<i*i;
        }
    }
};
class derived : public calculation
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