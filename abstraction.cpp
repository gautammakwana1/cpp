// Pure virtual function has 0 value
// abstraction has minimum one pure virtual function
#include<iostream>
using namespace std;
class base{
    public:
    virtual void test() =0; // pure virtual function has not data in the block it has only 0 value
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
    base *ptr;
    derived d;
    ptr =&d;
    ptr->test();
}