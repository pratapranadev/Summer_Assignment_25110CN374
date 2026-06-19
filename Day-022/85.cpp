// WAP to Check palindrome string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :\n";
    cin>>s;
    
    string original=s;//to store copy of s
    // reverse string
    for(int i=0;i<s.size()/2;i++)
    {
        int temp=s[i];
        s[i]=s[(s.size())-i-1];
        s[(s.size())-i-1]=temp;
    }

    if(s==original)
    {
        cout<<"Entered string is palindrome string";
    }
    else
    {
        cout<<"Entered string is not a palindrome string";
    }
    
}
