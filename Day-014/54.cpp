//WAP to find frequency of element
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
   cout<<endl;
   int target;
   cout<<"Enter the element to find its frequency:";
   cin>>target;
   int count=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]==target)
    {
        count++;
    }
   }
   if(count>0)
   cout<<"Frequency of "<<target<<"="<<count;
   else
   cout<<"Element not present";
}