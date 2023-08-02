#include<iostream>
using namespace std;
class base{
    public:
    void test()
    {}
};
class factorial : public base {
    public:
    void add()
    {}
};
class derived : public factorial
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