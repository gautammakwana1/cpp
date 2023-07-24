#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void setdata(int x,int y,int z)
    {
        l=x,b=y,h=z;
    }
    int getdata()
    {
        return l*b*h;
    }
    Box operator++(int)
    {
        Box t;
        t.l=l++;
        t.b=b++;
        t.h=h++;
        return t;
    }
};
int main()
{
    Box a,b;
    a.setdata(2,3,4);
    cout<<"Volume of box A is :"<<a.getdata()<<endl;

    a++;
    b=a;
    cout<<"Volume of box B is :"<<b.getdata()<<endl;
}
