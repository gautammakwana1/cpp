#include<iostream>
using namespace std;
class Result
{
    int maths,eng,sci,total;
    char name[30];
    float per;
    int Total()
    {
        return eng+ maths+ sci;
    }
    public:
    Result()
    {
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter a Maths marks :";
        cin>>maths;
        cout<<"Enter a sci marks :";
        cin>>sci;
        cout<<"Enter a eng marks :";
        cin>>eng;

        total=Total();
        per=total/3;

    }
    void showdata()
    {
        cout<<"Student Name :"<<name<<endl;
        cout<<"Maths Marks :"<<maths<<endl;
        cout<<"Science Marks :"<<sci<<endl;
        cout<<"English Marks :"<<eng<<endl;
        cout<<"Total Marks :"<<total<<endl;
        cout<<"Percentage :"<<per<<endl;
    }
};
int main()
{
    Result s;
    s.showdata();
}
