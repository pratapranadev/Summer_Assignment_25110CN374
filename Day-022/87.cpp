// WAP to Character frequency
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :\n ";
    cin>>s;
    int arr[26];// to store frequency of character
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<s[i];i++)
    {
            arr[s[i]-'a']++;
    }
    cout<<"Frequency of character :\n";
    //to print character frequency
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            cout<<(char)('a'+i)<<" : "<<arr[i];
            cout<<"\n";
        }
    }
}
