//WAP to linear search
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
  cout<<"Enter the number to be searched:";
  cin>>target;
  int index=-1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==target)
    {
        index=i;
        break;
    }
  }
  if(index>-1)
  {
    cout<<"Element found at index "<<index;
  }
  else
  {
    cout<<"Element not found";
  }
}