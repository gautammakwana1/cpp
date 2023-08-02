#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a value :";
        cin>>a;
    }
};
class test : public base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter b value :";
        cin>>b;
    }
};
class derived : public test
{
    public:
    void product()
    {
        test ::setB();
        cout<<"product of a and b is :"<<a*b<<endl;
    }
};
int main()
{
    derived d;
    d.setA();
    d.product();
}