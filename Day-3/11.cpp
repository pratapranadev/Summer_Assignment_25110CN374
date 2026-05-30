//WAP to find GCD of two numbers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1;int num2;
    cout<<"Enter the numbers:\n";
    cin>>num1;
    cin>>num2;
    int gcd;//to store gcd of two numbers
    for(int i=1;i<=min(num1,num2);i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD of "<<num1<<" and "<<num2<<":"<<gcd;

}