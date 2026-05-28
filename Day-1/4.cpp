//WAP to count digits in a number
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    int count=0;
    while(N>0)
    {
         N/=10;
         count++;
    }
    cout<<"Number of digits:"<<count;
}