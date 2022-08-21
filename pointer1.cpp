#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int*b=&a;
    int**c=&b;
    cout<<"The Address of a is "<<b<<endl;
    cout<<"The Address of b is "<<c<<endl;
    cout<<"The  value at Address of a is "<<*b<<endl;
    cout<<"The  value at Address c is "<<*b<<endl;
    return 0;
}