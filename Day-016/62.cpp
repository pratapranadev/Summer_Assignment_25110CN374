//WAP to find maximum frequency element
#include <iostream>
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
     int count=1;//to count frequency of element
     int max_element;//to store the max frequency element
     int max_count=1;
     for(int i=1;i<n;i++)
     {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
          if(max_count<count)
            {
                max_count=count;
                max_element=arr[i-1];
                count=1;
            }
        }
     
     cout<<"Maximum frequency element : "<<max_element;
    }