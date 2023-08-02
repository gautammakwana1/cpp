#include<iostream>
using namespace std;
class fectorial
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
class calculation : public fectorial
{
    protected:
    int i,f=1;
    public:
    void setdata()
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
    }
};
class derived : public calculation
{
    public:
    void display()
    {
        cout<<"Factorial of "<<n<<" is : "<<f<<endl;
    }
};
int main()
{
    derived x;
    x.getdata();
    x.setdata();
    x.display();
}