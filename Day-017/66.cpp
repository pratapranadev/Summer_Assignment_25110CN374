//WAP to union of arrays
#include <iostream>
#include <vector>
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
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
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
    //union of two arrays
     vector<int> res;
     //to include element of arr1
    for(int i=0;i<n1;i++)
    {
        int j=0;
        for(;j<res.size();j++)
        {
            if(res[j]==arr1[i])
            {
                break;
            }

        }
        if(j==res.size())
        {
            res.push_back(arr1[i]);
        }
    }
    //to include element of arr2
    for(int i=0;i<n2;i++)
    {
        int j=0;
        for(;j<res.size();j++)
        {
            if(res[j]==arr2[i])
            {
                break;
            }

        }
        if(j==res.size())
        {
            res.push_back(arr2[i]);
        }
    }
    //display union
    cout<<"Union of two arrays:\n";
    for(auto x:res)
    {
        cout<<x<<" ";
    }
}