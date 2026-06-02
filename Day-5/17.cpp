// WAP to check perfect number
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:\n";
    cin>>N;
    int sum=0;
    for(int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            sum+=i;
        }
    }
    if(N==sum)
    {
        cout<<N<<" is a perfect number";
    }
    else
    {
        cout<<N<<" is a not perfect number";
    }
}