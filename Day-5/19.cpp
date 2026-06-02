// WAP to print factors of a numbers
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the N:\n";
    cin>>N;
    cout<<"factor of "<<5<<" :"<<endl;
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            cout<<i<<" ";
        }
    }
}