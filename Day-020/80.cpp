//WAP to find column-wise sum
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the size of matrix:\n";
    cout<<"Rows:\n";
    cin>>m;
    cout<<"Column:\n";
    cin>>n;
    int mat[m][n];
     cout<<"Enter the elements of matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    //display matrix
    cout<<"Matrix with column-sum below each column:\n";
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //colummn-wise sum 
    for(int i=0;i<m;i++)
    {
        int column_sum=0;
        for(int j=0;j<n;j++)
        {
            column_sum+=mat[j][i];
        }
        cout<<column_sum<<" ";
    }
}