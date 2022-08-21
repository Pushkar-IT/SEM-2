#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=5;
    int b=55;
    int c=555;
    int d=5555;
    int e=55555;

    cout<<"The value of a is:"<<setw(6)<<a<<endl;
    cout<<"The value of b is:"<<setw(6)<<b<<endl;
    cout<<"The value of c is:"<<setw(6)<<c<<endl;
    cout<<"The value of d is:"<<setw(6)<<d<<endl;
    cout<<"The value of e is:"<<setw(6)<<e<<endl;
    return 0;
}