#include<iostream>
using namespace std;
class base{
    int a;
    protected:
    int b;
    public:
    void hello()
    {
        cout<<"hello......"<<endl;
    }
};
class derived : public base
{
    public:
    void test()
    {
        base :: b =10;
        cout<<"Hello world"<<endl;
        cout<<"B is :"<<b<<endl;
    }
};
int main()
{
    derived d;
    d.hello();
    d.test();
}