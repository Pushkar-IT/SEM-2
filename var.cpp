#include<iostream>
using namespace std;
int main()
{
    float x=558.5;
    float &y=x;

    cout<<x<<endl;
    cout<<y;
    
    return 0;
}