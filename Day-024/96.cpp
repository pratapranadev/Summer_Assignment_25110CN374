//WAP to Remove duplicate characters
#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :\n";
    cin>>s;
    int n=s.size();
    //sorting the string
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n-i-1;j++)
       {
        if(s[j]>s[j+1])
        {
            char temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
        }
       }
    }
    int i=0;
    while(i<s.size())
    {
        if(s[i]==s[i-1])
        {
           s.erase(i,1);
        }
        else
        i++;
    }
    cout<<"String after removing duplicates :\n";
    cout<<s;
}