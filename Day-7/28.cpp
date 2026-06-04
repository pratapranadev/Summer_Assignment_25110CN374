//Write a program to Recursive reverse number
#include <iostream>
#include <cmath>
using namespace std;
int reverse(int n,int digit)
{
    if(n==0)
    {
         return 0;
    }
    return (n%10)*pow(10,digit-1)+reverse(n/10,(digit-1));
}
int main()
{
    int N;
    cout<<"Enter the number:\n";
    cin>>N;
    int temp=N;
    int count=0;
    if(N==0)
    {
        count=1;
    }
    while(temp>0)
    {
        count++;
        temp/=10;
    }

    cout<<"Reverse of "<<N<<" ="<<reverse(N,count);
}