//WAP to write function for fibonacci
#include <iostream>
using namespace std;
void fibonacci(int n)
{
       int n1=1;
       int n2=1;
       int sum=n1+n2;
       cout<<"Fibonacci series:\n";
       cout<<n1<<" "<<n2<<" ";
       for(int i=2;i<n;i++)
       {
            cout<<sum<<" ";
            n1=n2;
            n2=sum;
            sum=n1+n2;
       }
}
int main()
{
    int num;
    cout<<"Enter the number of terms in fibonacci series:\n";
    cin>>num;
    fibonacci(num);
}