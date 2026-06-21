// WAP to Check string rotation
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the string1:\n";
    cin>>s1;
    cout<<"Enter the string2:\n";
    cin>>s2;
     int m=s2.size();
     bool res=false;
    for(int i=0;i<m;i++)
    {
        if(s1==s2)
        {
            res=true;
            break;
        }
       char last=s2.back();
        s2.pop_back();
        s2=last+s2;
    }
    if(res)
    {
        cout<<"string 2 is the rotation of string 1";
    }
    else
    {
        cout<<"string 2 is not the rotation of string 2";
    }

}