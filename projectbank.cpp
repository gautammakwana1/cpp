#include<iostream>
using namespace std;
class bank
{
    public:
    int a=1000;

    void Deposite(int p)
    {
        if(p > 0 )
        {
            a=a+p;
            cout<<"Deposite Successful ."<<endl;
        }
        else
        {
            cout<<"Invalid . Please try again"<<endl;
        }
    }
    void Withdrawal(int p)
    {
        if(p > 0 && p <= a)
        {
            a=a-p;
            cout<<"Withdrawal Successful ."<<endl;
        }
        else
        {
            cout<<"Invalid amount or Insufficient balance . Please try again "<<endl;
        }
    }
    int Balance()
    {
        return a;
    }

};
int main()
{
    bank x;
    int n;
    int p;
    do{
         cout<<"1. Deposite ";
         cout<<"\n2. Withdrawal";
         cout<<"\n3. Check Balance";
         cout<<"\n4. Exit";
         cout<<"\nEnter Your Choice :";
         cin>>n;
        
        switch(n){
            case 1:
                cout<<"Enter Your Deposite Amount :";
                cin>>p;
                x.Deposite(p);
                break;
            case 2:
                cout<<"Enter Your Withdrawal Amount :";
                cin>>p;
                x.Withdrawal(p);
                break;
            case 3:
                cout<<"Your Bank Balance is :"<<x.Balance()<<endl;
                break;
            case 4:
                cout<<"Thank You. Visit again."<<endl;
                break;
            default:
                cout<<"You Entered Wrong choice :"<<endl;
        }
    }while(n != 4);
}