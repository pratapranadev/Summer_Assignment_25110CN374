//WAP to Count vowels and consonants
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:\n";
    cin>>s;
     
    int vowel_count=0;// to store the number of vowels
    int consonants_count=0;//to store the number of consonants

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowel_count++;
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')&&
        (s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'||s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U'))
        {
            consonants_count++;
        }
    }
        cout<<"Number of vowels : "<<vowel_count<<"\n";
        cout<<"Number of consonants : "<<consonants_count;
    
}