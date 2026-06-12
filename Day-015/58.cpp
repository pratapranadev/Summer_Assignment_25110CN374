//WAP to rotate array left
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
   int k;//to store number of steps to move right
   cout<<"Enter the steps to move right:\n";
   cin>>k;
   k%=n;
   cout<<"Array:\n";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   int temp[n];
  //move n-d element at back to start
    for(int i=0;i<n-k;i++)
  {
        temp[i]=arr[k+i];
  }
       
  //move d elements at front to back
  for(int i=0;i<k;i++)
  {
     temp[n-k+i]=arr[i];
  }
  //copy temp to arr
  for(int i=0;i<n;i++)
  {
     arr[i]=temp[i];
  }
  //printing array after rotation
  cout<<"Array after rotation:\n";
  for(int i=0;i<n;i++)
  {
     cout<<arr[i]<<" ";
  }

}