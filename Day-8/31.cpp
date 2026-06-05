// WAP to print character triangle
#include <iostream>
using namespace std;
int main()
{
     int N;//height of pyramid
    cout<<"Enter the height of triangle:";
    cin>>N;
    
    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            cout<<char('A'+j);
        }
        cout<<endl;
    }
}