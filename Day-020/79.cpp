//WAP to find row-wise sum
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
    //row-wise sum 
    cout<<"Matrix with row-sum after each row:"<<endl;
    for(int i=0;i<m;i++)
    {
        int row_sum=0;
        for(int j=0;j<n;j++)
        {
            row_sum+=mat[i][j];
           cout<<mat[i][j]<<" ";
        }
        cout<<row_sum<<" ";
        cout<<endl;
    }
}

















 