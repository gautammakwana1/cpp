#include<iostream>
using namespace std;
class rect{
    int l,b;
    public:
    void setdata(int, int);
    int getarea(){
        return l*b;
    }
    friend rect operator+(rect p, rect q){
        rect t;
        t.l =p.l +q.l;
        t.b =p.b +q.b;
        return t;
    }
};
void rect::setdata(int x,int y){
    l=x , b=y;
}
int main()
{
    rect r,a,c;
    r.setdata(4,3);
    cout<<"area of rectangle is :"<<r.getarea()<<endl;
    a.setdata(5,6);
    cout<<"area of rectangle is :"<<a.getarea()<<endl;
    c= r + a;
    cout<<"area of rectangle is :"<<c.getarea()<<endl;

}