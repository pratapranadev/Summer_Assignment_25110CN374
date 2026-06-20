// WAP to Find first repeating character
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :\n";
    cin>>s;
    int arr[26]={0};
    char c=' '; //to store first repeating character
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(arr[s[i]-'a']>1)
        {
            c=s[i];
            break;
        }
    }
    if(c==' ')
    {
        cout<<"No repeating character";
    }
    else
    cout<<"First repeating character :"<<c;

}