//WAP to find largest and smallest element
#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of array:";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements of the array:";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   cout<<"Array:\n";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
  int max=arr[0];int min=arr[0];
   for(int i=0;i<n;i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
    }
    if(arr[i]<min)
    {
        min=arr[i];
    }
}
cout<<endl;
cout<<"largest element:"<<max<<endl;
cout<<"Smallest element:"<<min;
}