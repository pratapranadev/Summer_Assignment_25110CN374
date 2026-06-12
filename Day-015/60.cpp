//WAP to move zeroes to end
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
  int k=0;
  for(int j=0;j<n;j++)
  {
    if(arr[j]!=0)
    {
        int temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        k++;
    }
  }
  cout<<"Array after moving zeroes to end:\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
