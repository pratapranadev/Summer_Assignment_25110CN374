//WAP to count even and odd elements
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
   int count_even=0,count_odd=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]%2==0)
    {
        count_even++;
    }
    else
    count_odd++;
   }
   cout<<"Number of odd elements:"<<count_odd<<endl;
   cout<<"Number of even elements:"<<count_even<<endl;
}
