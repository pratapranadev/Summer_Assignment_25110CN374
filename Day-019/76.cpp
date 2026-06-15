//WAP to find diagonal sum
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
    cout<<"matrix :\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int diagonal_sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                diagonal_sum+=mat[i][j];
            }
        }
    }
    cout<<"Diagonal sum = "<<diagonal_sum;
}