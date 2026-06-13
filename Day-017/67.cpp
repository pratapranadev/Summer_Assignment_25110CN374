//WAP to intersection of arrays
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
    //intersection of two arrays
    vector<int> res;
     for(int i=0;i<n1;i++)
     {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                int k=0;
              for(;j<res.size();j++)
           {
            if(res[k]==arr1[i])
            {
                break;
            }

        }
        if(k==res.size())
        {
            res.push_back(arr1[i]);
        }
    }
        }
     }

    //Intersection array
     cout<<"Intersection of two array:\n";
     for(auto x:res)
     {
        cout<<x<<" ";
     }
      }