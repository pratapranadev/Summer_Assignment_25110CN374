//WAP to selection sort
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
    //selection sort
     for(int i=0;i<n;i++)
     {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        int temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;

     }
     //array after sorting
     cout<<"sorted array (ascending order):\n";
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
}