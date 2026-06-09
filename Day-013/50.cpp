//WAP to find sum and average of array
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
   double sum=0;
   for(int i=0;i<n;i++)
   {
    sum+=arr[i];
   }
   cout<<"Sum of array elements:"<<sum<<endl;
   cout<<"Average of array elements:"<<(sum/n);
}