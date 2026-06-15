//WAP to bubble sort
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"unsorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    //bubble sort
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
     //array after sorting
     cout<<"sorted array (ascending order):\n";
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
}