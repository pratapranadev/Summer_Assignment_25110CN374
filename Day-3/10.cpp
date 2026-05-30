// WAP to print prime numbers in range
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the Number:";
    cin>>N;
    bool prime=true;
    cout<<"Prime numbers in range "<<"[2,"<<N<<"] :"<<endl;
    for(int i=2;i<=N;i++)
    {
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            prime=false;
        }
    }
    if(prime)
         cout<<i<<" ";
         prime=true;
}
}

