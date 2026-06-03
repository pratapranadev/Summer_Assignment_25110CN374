//Write a program to Convert decimal to binary
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number(Decimal):\n";
    cin>>N;
    int temp=N;
    int bin=0;//to store binary representation
    int place=1;
    while(temp>0)
    {
        int bit=temp%2;
        bin+=place*bit;
        place*=10;
        temp/=2;
    }
    cout<<"Binary representation of "<<N<<"="<<bin;
}