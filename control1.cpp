#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"Go Home"<<endl;
    }
    else if(age==18){
        cout<<"Come with a pass"<<endl;
    }
    else{
        cout<<"Welcome to the party"<<endl;
    }

    return 0;
}