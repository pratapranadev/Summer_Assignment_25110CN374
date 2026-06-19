//WAP to Reverse a string.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:\n";
    cin>>s;
    int n=s.size();
    //reverse string
    for(int i=0;i<n/2;i++)
    {
        int temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    cout<<"String after revers : "<<s;
}