#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    switch (age)
    {
    case 22:
        cout<<"Your age is 22"<<endl;
        break;
    case 35:
        cout<<"Your age is 35"<<endl;
        break;
    
    default:
    cout<<"No special Case";
        break;
    }
    return 0;
}