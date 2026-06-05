//WAP to print number triangle
#include <iostream>
using namespace std;
int main()
{
     int N;//height of pyramid
    cout<<"Enter the height of triangle:";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}