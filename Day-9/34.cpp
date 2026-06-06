//WAP to print reverse number triangle
#include <iostream>
using namespace std;
int main()
{
     int N;
     cout<<"Enter the height of triangle:";
     cin>>N;
     for(int i=1;i<=N;i++)
     {
        for(int j=1;j<=N-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
     }
}