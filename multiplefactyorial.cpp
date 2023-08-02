#include<iostream>
using namespace std;
class base1{
    public:
    void test()
    {}
};
class base2{
    public:
    void test()
    {}
};
class derived : public base1, public base2
{
    public:
    int getdata()
    {
        int value,fact=1,i;

        cout<<"ENter any number ";
        cin>>value;
         for(i=1;i<=value;i++)
        {    
         fact=fact*i;    
        }    
  cout<<"Factorial of " <<value<<" is: "<<fact<<endl;  
    }    
};
int main()
{
    derived m;
    m.getdata();
}