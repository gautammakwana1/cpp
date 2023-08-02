#include<iostream>
using namespace std;
/*class factorial
{
    public:
    int n;
};*/
class calculation
{
    public:
    int i,f=1,n;
    void getdata()
    {
        cout<<"Enter a number :";
        cin>>n;
    }
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
        cout<<"Factorial of "<<n<<" is :"<<f<<endl;
    }
};
int main()
{
    derived x;
    x.getdata();
    x.setdata();
    x.display();
}