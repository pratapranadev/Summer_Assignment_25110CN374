// WAP to find largest prime factor
#include<iostream>
#include <cmath>
using namespace std;
bool isprime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout<<"Enter the number:\n";
    cin>>num;
    int prime_factor=-1;
    for(int i=2;i<num;i++)
    {
         if(num%i==0)
         {
            if(isprime(i))
            {
                prime_factor=i;
            }
         }
    }
    if(isprime(num))
    prime_factor = num;
    if(prime_factor>-1)
    cout<<"Largest prime factor:"<<prime_factor;
    else
    cout<<"No largest prime factor";
}