//WAP to print star pyramid
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
       for(int k=1;k<=2*i-1;k++)
       {
        cout<<"*";
       }
       cout<<endl;
   }
}