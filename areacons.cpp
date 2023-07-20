#include<iostream>
using namespace std;
class area{
    public:
    area(float l)
    {
        cout<<"Area of cube is :"<<6*l*l<<endl;
    }
    area(float r,float h)
    {
        cout<<"Area of cylinder is :"<<(2*3.14*r*h)+(2*3.14*r*r)<<endl;
    }
    area(float r,float i,float m)
    {
        cout<<"Area of circle is :"<<(4*3.14*r*r)<<endl;
    }
    area(float b,float h,float q,float w)
    {
        cout<<"Area of triangle is :"<<(b*h*0.5)<<endl;
    }
};
int main()
{
    area a(5),b(5,8),c(6,1,1),d(4,8,1,1);
}