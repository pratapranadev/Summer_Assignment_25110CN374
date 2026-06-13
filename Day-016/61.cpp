//WAP to find missing number in array
#include<iostream>
using namespace std;
int main()
{
    
    int n;
   cout<<"Enter the size of array:";
   cin>>n;
   int arr[n-1];
   cout<<"Enter the elements of the array:";
   for(int i=0;i<n-1;i++)
   {
    cin>>arr[i];
   }
   int x=0;int y=0;
   for(int i=0;i<n-1;i++)
   {
     x^=arr[i];
   }
   for(int i=1;i<=n;i++)
   {
    y^=i;
   }
    cout<<"Array:\n";
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
   cout<<"Missing element:"<<(x^y);
}
