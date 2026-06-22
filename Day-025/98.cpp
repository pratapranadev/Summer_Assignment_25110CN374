// WAP to Find common characters in strings
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the string 1 :\n";
    cin>>s1;
    cout<<"Enter the string 2 :\n";
    cin>>s2;
    int common_char[26]={0};
    for(int i=0;i<s1.size();i++)
    {
        if(common_char[s1[i]-'a']==0){
        for(int j=0;j<s2.size();j++)
        {
            if(s1[i]==s2[j])
            {
                common_char[s1[i]-'a']=1;
            }
        }
    }
    }
    cout<<"Common characters in strings :\n";
    for(int i=0;i<26;i++)
    {
        if(common_char[i]==1)
        cout<<(char)('a'+i)<<" ";
    }
}