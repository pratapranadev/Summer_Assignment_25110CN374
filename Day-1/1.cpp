//WAP to calculate sum of first N natural numbers
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the Number:";
    cin>>N;
    int sum=0;//to store sum of first N natural number
    for(int i=1;i<=N;i++)
    {
          sum+=i;
    }
    cout<<"Sum of first "<<N<<" natural number:"<<sum;
}