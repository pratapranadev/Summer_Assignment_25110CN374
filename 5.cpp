//WAP to find sum of digits of a number
#include <iostream>
using namespace std;
int main()
{
    int N;//to store number
    cout<<"Enter the number:";
    cin>>N;
    int sum=0;//to store the sum of digits of number
    while(N>0)
    {
        int digit=N%10;
        sum+=digit;
        N/=10;
    }
    cout<<"Sum of digits:"<<sum;
}