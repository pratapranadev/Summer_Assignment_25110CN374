//WAP  to generate fibonacci series
#include <iostream>
using namespace std;
int main()
{  

    int N;//number till fibonacci series is to be printed
    cout<<"Enter the number:";
    cin>>N;
    cout<<"Fibonacci series:"<<endl;
    int n1=1;int n2=1;
    cout<<n1<<" "<<n2<<" ";
     int sum=n1+n2;
    while(sum<=N)
    {
        cout<<sum<<" ";
        n1=n2;
        n2=sum;
        sum=n1+n2;
    }

}