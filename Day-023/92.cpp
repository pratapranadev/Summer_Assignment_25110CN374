//WAP  to find maximum occurring character
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :\n";
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    int max=0;
    char max_char;
    for(int i=0;i<s.size();i++)
    {
        if(freq[s[i]-'a']>max)
        {
            max=freq[s[i]-'a'];
            max_char=s[i];
        }
    }
    cout<<"Maximum occuring character :"<<max_char;

}