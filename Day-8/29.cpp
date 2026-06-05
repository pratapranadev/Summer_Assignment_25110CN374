//WAP to print half pyramid pattern
#include <iostream>
using namespace std;
int main()
{
    int N;//height of pyramid
    cout<<"Enter the height of pyramid:";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        }
        
    }
