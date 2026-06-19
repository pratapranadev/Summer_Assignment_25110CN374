//WAP to Convert lowercase to uppercase
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : \n";
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
           s[i]=(65+(s[i]-'a'));
        }
    }
    cout<<"String after converting lowercase to uppercase : "<<s;
}