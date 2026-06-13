//WAP to remove duplicates from array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;//size of array
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:\n";
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
     vector<int> temp;
     for(int i=0;i<n;i++)
     {
        if(arr[i]!=arr[i-1])
        { 
            temp.push_back(arr[i]);
         
        }
     }

     cout<<"Array after removing duplicates:\n";
     for(int i=0;i<temp.size();i++)
     {
        cout<<temp[i]<<" ";
     }
    }