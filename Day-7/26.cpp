//Write a program to Recursive Fibonacci
#include <iostream>
using namespace std;
//recursive function to find nth fibonacci term
int fibonacci(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
       int N;
       cout<<"Enter the number:";
       cin>>N;
       cout<<"fibonacci series with "<<N<<" terms:"<<endl;
       //print fibonacci series starting from zero
       for(int i=0;i<N;i++)
       {
            cout<<fibonacci(i)<<" ";
       }
 
    }