//WAP to binary search
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
    //sorting array
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
    int target;
    cout<<"Enter the element to be searched:\n";
    cin>>target;
    //binary search
    int start=0;int end=n-1;int index=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            index=mid;
            break;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else
        end=mid-1;
    }
    cout<<"Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    if(index>-1)
    {
        cout<<"Element is found at index :"<<index;
    }
    else
    cout<<"Element not found";


}