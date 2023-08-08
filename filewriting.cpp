#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream hello("abc.txt");
    if(hello.is_open())
    {
        hello<<"CPP language \n";
        hello<<"Welcome to skill qode\n";
        hello<<"we started new lab \n";
        hello<<"we strated new branch \n";
        hello.close();
    }
    else
    {
        cout<<"File opening is fail";
    }
    return 0;
}