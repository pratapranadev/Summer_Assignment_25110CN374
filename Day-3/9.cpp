// WAP to check whether number is prime
#include <iostream>
using namespace std;
int main()
{
    int N;//to store the number
    cout<<"Enter the Number:";
    cin>>N;
    bool prime=true;//to store result whether number is prime or not
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
        {
            prime=false;
        }
    }
    if(prime)
    {
         cout<<N<<" is a prime Number";
    }
    else
         cout<<N<<" is not a prime number";

}








