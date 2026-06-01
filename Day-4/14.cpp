//WAP to find nth fibonacci term
#include <iostream>
using namespace std;
int main()
{  

    int N;
    cout<<"Enter the term(N>0):";
    cin>>N;
    cout<<"Fibonacci series:"<<endl;
    int n1=1;int n2=1;
    int nth;
    int count=0;//to check nth term
    if(N==1||N==2)
    {
        nth=1;
    }
    else{
        for(int i=3;i<=N;i++)
        {
            nth=n1+n2;
            n1=n2;
            n2=nth;
        }

}
cout<<N<<"th term in fibonacci series :"<<nth;
}