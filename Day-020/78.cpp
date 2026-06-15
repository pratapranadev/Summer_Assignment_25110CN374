//WAP to check symmetric matrix
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the size of square matrix:\n";
    cout<<"Rows:\n";
    cin>>m;
    cout<<"Column:\n";
    cin>>n;
    int mat[m][n];
    if(m==n){
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
    int symmetric=-1;
    //check matrix is symmetric
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
                symmetric=0;
                break;
            }
        }
    }
        if(symmetric>-1)
        {
            cout<<"Matrix is not symmetric matrix";
        }
        else{
            cout<<"Matrix is symmetric matrix";
        }
    }
    else{
        cout<<"Entered matrix is not square matrix";
    }

    }
