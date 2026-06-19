//WAp to Remove spaces from string
#include <iostream>
#include <string>
using namespace std;
void trimstring(string &s)
{
    //removing space from string
   int i=0;
   while(i<s.size())
   {
    if(s[i]==' ')
      s.erase(i,1);
      else
      i++;
   }
}
int main()
{
    string s;
    cout<<"Enter the string:\n";
    getline(cin,s);
    trimstring(s);
    cout<<"string after removing space : "<<s;
}