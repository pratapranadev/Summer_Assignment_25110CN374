//WAP to write function to find sum of two numbers
#include<iostream>
using namespace std;

int sum(int &a,int &b)
{
    return a+b;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers:\n";
    cout<<"num1:";
    cin>>num1;
    cout<<"num2:";
    cin>>num2;

    cout<<"Sum of "<<num1<<" and "<<num2<<" = "<<sum(num1,num2);
}