//WAP to multiply matrices
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
     if(n1==m2)
     {
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
          int multiply[m1][n2];
          for(int i=0;i<m1;i++)
          {
               for(int j=0;j<n2;j++)
               {
                multiply[i][j]=0;
                for(int k=0;k<n1;k++)
                {
                    multiply[i][j]+=arr1[i][k]*arr2[k][j];
                }
               }
          }
          //display product of matrices
          cout<<"Product of two matrices:\n";
          for(int i=0;i<m1;i++)
          {
            for(int j=0;j<n2;j++)
            {
                cout<<multiply[i][j]<<" ";
            }
            cout<<endl;
          }
     }
     else{
        cout<<"matrices cannot be multiplied";
     }
    }