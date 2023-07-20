#include<iostream>
using namespace std;
class volume{
    public:
    volume(float l)
    {
        cout<<"Volume of cube is :"<<l*l*l<<endl;
    }
    volume(float r,float h)
    {
        cout<<"Volume of cylinder is :"<<3.14*r*r*h<<endl;
    }
    volume(float r,float i,float m)
    {
        cout<<"Volume of circle is :"<<(4*3.14*r*r*r)/3<<endl;
    }
    volume(float b,float h,float q,float w)
    {
        cout<<"Volume of triangle is :"<<(b*h*1)/3<<endl;
    }
};
int main()
{
    volume a(5),b(5,8),c(6,1,1),d(4,8,1,1);
}