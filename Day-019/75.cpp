//WAP to transpose matrix
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
    int transpose[n][m];//to store transpose of matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[j][i]=mat[i][j];
        }
    }

    cout<<"matrix after transpose:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }



    
    

}