//WAP to print repeated character
#include <iostream>
using namespace std;
int main()
{
     int N;
     cout<<"Enter the height of pattern:";
     cin>>N;

     for(int i=1;i<=N;i++)
     {
        char c=('A'+i-1);
        for(int j=1;j<=i;j++)
        {
               cout<<c;
        }
        cout<<endl;
     }
}