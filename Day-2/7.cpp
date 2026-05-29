//WAP to find products of digits
#include <iostream>
using namespace std;
int main()
{
    int N;//to store the number
    cout<<"Enter the number:";
    cin>>N;
    int product=1;//to store the products of digit
    while(N>0)
    {
        int digit=N%10;
        product*=digit;
        N/=10;
    }
    cout<<"Product of digits : "<<product;
}