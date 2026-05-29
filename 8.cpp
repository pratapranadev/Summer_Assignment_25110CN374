//WAP to check whether a number is palindrome
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    int o=N;//to store copy of N
    int rev=0;//to store reverse of N
    while(N>0)
    {
        int digit=N%10;
        rev=rev*10+digit;
        N/=10;
    }
    if(o==rev)
    {
        cout<<"Entered Number is palindrome";

    }
    else
    {
        cout<<"Entered Number is not palindrome";
    }
}