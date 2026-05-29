//WAP to reverse a number
#include <iostream>
using namespace std;
int main()
{
    int N;//to store the number
    cout<<"Enter the number:";
       cin>>N;
       int rev=0;//to store reverse of number;
       while(N>0)
       {
        int digit=N%10;
        rev=rev*10+digit;
        N/=10;
       }
       cout<<"Reverse of Number:\n";
       cout<<rev;
}