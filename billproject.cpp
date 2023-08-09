#include<iostream>
#include<string>
using namespace std;
class bill{
    public:
    string name;
    int numb,qty,bill=0;
    string items[10];

    void menu()
    {       cout<<"<============================================HOTEL PARADISE======================================>"<<endl;
            cout<<"\nEnter Your Name :";
            cin>>name;
            cout<<"\nEnter Your Number :";
            cin>>numb;
            cout<<"\n**********************MENU*******************"<<endl;
            cout<<"\n1.Aloo chole"<<"\t\t\t\t\tRs.155/-";
            cout<<"\n2.Soya Keema"<<"\t\t\t\t\tRS.165/-";
            cout<<"\n3.Paneer Bhurji"<<"\t\t\t\t\tRs.165/-";
            cout<<"\n4.Margerita"<<"\t\t\t\t\tRs.240/-";
            cout<<"\n5.Kid's Special"<<"\t\t\t\t\tRs.255/-";
            cout<<"\n6.Chilli Flakes & Rosted Garlic"<<"\t\t\tRs.255/-";
            cout<<"\n7.Aap ki Pasand"<<"\t\t\t\t\tRs.265/-";
            cout<<"\n8.Green Goddess"<<"\t\t\t\t\tRs.265/-";
            cout<<"\n9.Super Cheesy"<<"\t\t\t\t\tRs.325/-";
            cout<<"\n10.Extra Topping Cheese"<<"\t\t\t\tRs.50/-";
            cout<<"\n      0. Confirm Your Order \n";
    }
    void customer()
    {
        cout<<"Your Name is :"<<name<<endl;
        cout<<"Your Mobile Number is :"<<numb<<endl;
    }
    int item1()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[0]="Aloo chole  = Rs.155/-";
        return bill=bill+qty*155;
    }
    int item2()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[1]="Soya Keema = Rs.165/-";
        return bill=bill+qty*165;
    }
    int item3()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[2]="Paneer Bhurji = Rs.165/-";
        return bill=bill+qty*165;
    }  
    int item4()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[3]="Margerita = Rs.240/-";
        return bill=bill+qty*240;
    }
    int item5()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[4]="Kid's Special = Rs.255/-";
        return bill=bill+qty*255;
    }    
    int item6()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[5]="Chilli Flakes & Rosted Garlic= Rs.255/-";
        return bill=bill+qty*255;
    }
    int item7()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[6]="Aap ki Pasand = Rs.265/-";
        return bill=bill+qty*265;
    }
    int item8()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[7]="Green Goddess = Rs.265/-";
        return bill=bill+qty*265;
    }
    int item9()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[8]="Super Cheesy = Rs.325/-";
        return bill=bill+qty*325;
    }
    int item10()
    {
        cout<<"Enter Quantity :";
        cin>>qty;
        items[9]="Extra Topping Cheese = Rs.50/-";
        return bill=bill+qty*50;
    }
};
int main()
{
    bill x;
    int choice;
    x.menu();
    cout<<"Enter Your Choice :";
    cin>>choice;

    do{
        switch(choice)
        {
            case 1:
                x.item1();
                break;
            case 2:
                x.item2();
                break;
            case 3:
                x.item3();
                break;
            case 4:
                x.item4();
                break;
            case 5:
                x.item5();
                break;
            case 6:
                x.item6();
                break;
            case 7:
                x.item7();
                break;
            case 8:
                x.item8();
                break;
            case 9:
                x.item9();
                break;
            case 10:
                x.item10();
                break;
            case 0:
                break;
        }

    }while(choice != 0);
}