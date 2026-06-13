//WAP to find pair with given sum
#include <iostream>
using namespace std;
int main()
{
    int n;//size of the array
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Array
    cout<<"Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the sum:\n";
    int target;
    cin>>target;
    //to find pair with given sum
    int freq=-1;
    for(int i=0;i<n;i++)
    {
        int sum=target-arr[i];
        for(int j=i+1;j<n;j++)
        {
               if(sum==arr[j])
               {
                cout<<"( "<<arr[i]<<","<<arr[j]<<" )";
                freq++;
               }
        }
    }
    if(freq==-1)
    {
        cout<<"No pairs with given sum";
    }
}