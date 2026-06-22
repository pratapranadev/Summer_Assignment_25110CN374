// WAP to Merge two sorted arrays
#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the size of arr1(sorted):\n";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of arr1(sorted):\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of arr2:\n";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of arr2:\n";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Array 1:\n";
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2:\n";
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int merge[n1+n2];
    int i=0;int j=0;int k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            merge[k++]=arr1[i++];
        }
        else
        {
            merge[k++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        merge[k++]=arr1[i++];
    }
    while(j<n2)
    {
      merge[k++]=arr2[j++];
    }

    cout<<"Array after merging two sorted Array:\n";
    for(int i=0;i<n1+n2;i++)
    {
        cout<<merge[i]<<" ";
    }
}