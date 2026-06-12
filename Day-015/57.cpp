//WAP to reverse a array
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
   int i=0;int j=n-1;
   while(i<j)
   {
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;j--;
   }
   //reversed array
   cout<<"Reversed Array:\n";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }

}