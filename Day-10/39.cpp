//WAP to print number pyramid
#include <iostream>
using namespace std;
int main()
{
   int N;
   cout<<"Enter the height of pyramid:";
   cin>>N;

   for(int i=1;i<=N;i++)
   {
       for(int j=N-1;j>=i;j--)
       {
        cout<<" ";
       }
       for(int k=1;k<=i;k++)
       {
        cout<<k;
       }
       for(int l=i-1;l>=1;l--)
       {
        cout<<l;
       }
       cout<<endl;
   }
}