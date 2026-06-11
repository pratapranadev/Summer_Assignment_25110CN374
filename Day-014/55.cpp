//WAP to find second largest element
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
   int first_largest=-1,second_largest=-1;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>first_largest)
    {
        second_largest=first_largest;
        first_largest=arr[i];
    }

    if(arr[i]<first_largest&&arr[i]>second_largest)
    {
        second_largest=arr[i];
    }

   }
   cout<<"Second largest element in the array :"<<second_largest;
}