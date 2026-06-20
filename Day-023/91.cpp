//WAP to Check anagram strings
#include <iostream>
#include <string>
using namespace std;
bool isAnagram(string s, string t) {
        int freq1[26]={0};
        int freq2[26]={0};
        for(int i=0;i<s.size();i++)
        {
            freq1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            freq2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
            {
                return false;
            }
        }
        return true;
    }
    int main()
    {
        string s1;
        cout<<"Enter the string 1:\n";
        cin>>s1;
        string s2;
        cout<<"Enter the string 2:\n";
        cin>>s2;
        bool result=isAnagram(s1,s2);
        if(result)
        {
            cout<<s2<<" is a anagram of "<<s1;
        }
        else
        {
            cout<<s2<<" is not a anagram of "<<s1;
        }
    }
