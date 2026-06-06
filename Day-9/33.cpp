//WAP to print reverse star pattern
#include <iostream>
using namespace std;
int main()
{
     int N;
     cout<<"Enter the height of pattern:";
     cin>>N;
     for(int i=1;i<=N;i++)
     {
        for(int j=N;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
     }
}