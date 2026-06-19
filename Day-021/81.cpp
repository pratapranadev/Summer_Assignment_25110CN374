//WAP to Find string length without strlen()
#include <iostream>
#include <string>
using namespace std;
// fn to find string length
int strlength(string &s)
{
    int count=0;
    for(auto ch:s)
    {
        count++;
    }
    return count;
}
int main()
{
    string s;
    cout<<"Enter the string:\n";
    cin>>s;
    int len=strlength(s);
    cout<<"Length of given string : "<<len;
    return 0;
}