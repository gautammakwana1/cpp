#include<iostream>
using namespace std;
class base1{
    public:
    void setA()
    {
    } 
};
class base2{
    public:
    void setB()
    {
    }
};
class derived : public base1, public base2
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