// WAP to Sort names alphabetically
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of names:\n";
    cin>>n;
    string names[n];
    cout<<"Enter the names :\n";
    for(int i=0;i<n;i++)
    {
        cin>>names[i];
    }
    cout<<"Names :\n";
     for(int i=0;i<n;i++)
    {
        cout<<names[i]<<" ";
    }
    cout<<endl;
    //sorting names alphabetically
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n-i-1;j++)
       {
        if(names[j]>names[j+1])
        {
            string temp=names[j];
            names[j]=names[j+1];
            names[j+1]=temp;
        }
       }

    }
    cout<<"Names after sorting in alphabetical order:\n";
     for(int i=0;i<n;i++)
    {
        cout<<names[i]<<" ";
    }
}