// Function overriding means function of multiple class has same name function
// virtual function has virtual keyword
#include<iostream>
using namespace std;
class base{
    public:
    virtual void test() // This is called virtual function 
    {
        cout<<"Base class function called "<<endl;
    }
};
class derived : public base{
    public:
    void test()
    {
        cout<<"Derived class function called"<<endl;
    }
};
int main()
{
    base *ptr ,b;
    derived d;
    ptr =&d;
    ptr->test();

    ptr=&b;
    ptr->test();
}