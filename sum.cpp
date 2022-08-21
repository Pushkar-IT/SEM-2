#include<iostream>
using namespace std;
int c= 53; 
int main()
{
    int a,b,c;
    cout<< "ENTER THE VALUE OF a:"<<endl;
    cin>>a;
    cout<< "ENTER THE VALUE OF b:"<<endl;
    cin>>b;
    c=a+b;
    cout<< "The value of c is:"<<::c;
    // <::c indicates towards the global declared variable
    return 0;
}