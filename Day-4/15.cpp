//WAP to check Armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:\n";
    cin>>N;
    int temp=N;//to store copy of N
    int count=0;//to store number of digits
    if(N==0)
    {
        count=1;
    }
    while(temp>0)
    {
        count++;
        temp/=10;
    }
    temp=N;
    double sum=0;
    while(temp>0)
    {
        int digit=temp%10;
        sum+=pow(digit,count);
        temp/=10;
    }
    if(N==(int)sum)
    {
        cout<<"Entered Number is Armstrong Number";
    }
    else
    {
        cout<<"Entered Number is not Armstrong Number";
    }
}