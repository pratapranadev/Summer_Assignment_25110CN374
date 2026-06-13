//WAP to merge arrays
#include <iostream>
using namespace std;
int main()
{
    int n1;int n2;
    cout<<"Enter the size of arr1:\n";
    cin>>n1;
    cout<<"Enter the size of arr2:\n";
    cin>>n2;
    int arr1[n1];int arr2[n2];
    cout<<"Enter the elements of arr1:\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of arr2:\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr2[i];
    }
    int merge[n1+n2];
    for(int i=0;i<n1;i++)
    {
        merge[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        merge[n1+i]=arr2[i];
    }
    //Arr1
    cout<<"Arr1:\n";
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    //Arr2
    cout<<"Arr2:\n";
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    //display merge
    cout<<"merged array:\n";
    for(int i=0;i<n1+n2;i++)
    {
        cout<<merge[i]<<" ";
    }

}