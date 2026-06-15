//WAP to add matrices
#include <iostream>
using namespace std;
int main()
{
    int m1;int n1;int m2;int n2;
    cout<<"matrix 1:\n";
    cout<<"Row:\n";
    cin>>m1;
    cout<<"Column:\n";
    cin>>n1;
    cout<<"matrix 2:\n";
    cout<<"Row:\n";
    cin>>m2;
    cout<<"Column:\n";
    cin>>n2;
    int arr1[m1][n1];int arr2[m2][n2];
     if(n1==n2&&m1==m2){
    cout<<"Enter the elements of matrix 1:\n";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of matrix 2:\n";
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr2[i][j];
        }
    }

    int res[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
     cout<<"matrix 1:\n";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"matrix 2:\n";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Sum of matrices:\n";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

   
}
else
{
    cout<<"matrices cannot be added";
}
}