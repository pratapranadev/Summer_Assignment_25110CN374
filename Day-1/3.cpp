//WAP to find factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    int factorial=1;
    for(int i=1;i<=N;i++)
    {
        factorial*=i;
    }
    cout<<"factorial of "<<N<<" = "<<factorial;
}