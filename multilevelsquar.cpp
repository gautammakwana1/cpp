#include<iostream>
using namespace std;
class base1{
    public:
    void setA()
    {
    } 
};
class square : public base1{
    public:
    void test()
    {
    }
};
class derived : public square
{
    public:
    int getdata()
    {
        int i,n;
        cout<<"enter value n ";
        cin>>n;

        for(i=0; i<=n; i++)
        {
            cout<<"\n"<<i;
            cout<<"\t"<<i*i;
        }
    }
};   
int main()
{
    derived m;
   // m.setA();
    //m.setB();
  m.getdata();
}