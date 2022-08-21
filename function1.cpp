#include<iostream>
using namespace std;

//function prototype
int sum(int a, int b);
void g(void);
int main()
{
    int num1;
    int num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    //num1 & num2 are actual paramneters
    cout<<"Sum of two numbers is:"<<sum(num1,num2)<<endl;
    g();
    return 0;
}

    int sum(int a, int b){
        //a & b will be taking value from actual parameters and called formal parameters
    int c= a+b;
    return c;
    }
    void g(){
        cout<<"thank you";
    }



    
