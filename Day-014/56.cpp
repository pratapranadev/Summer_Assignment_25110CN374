//WAP to find duplicates in array
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
   //sorting the array
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
     }
     //displaying duplicate elements
     cout<<"Duplicates in the array:\n";
     for(int i=1;i<n;i++)
     {
        if(arr[i]==arr[i-1])
        {
            cout<<arr[i]<<" ";
        }
     }


   
   
}