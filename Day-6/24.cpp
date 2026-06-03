//Write a program to Find x^n without pow()
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    int n;
    cout<<"Enter the power:";
    cin>>n;
     int power=1;//to store power
     for(int i=1;i<=n;i++)
     {
        power*=x;
     }
     cout<<x<<"^"<<n<<"="<<power;
}