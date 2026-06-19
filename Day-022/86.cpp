//WAP to Count words in a sentence
#include <iostream>
#include <string>
using namespace std;
//remove leading and trailing spaces
void trimstring(string &s)
{
    //removing leading space
   int i=0;
   while(i<s.size()&&s[i]==' ')
   {
      s.erase(i,1);
   }
   //removing trailing space
     i=s.size()-1;
  while (i >= 0 && s[i] == ' ')
   {
    s.erase(i,1);
    i--;
   }
}

int main()
{
    string s;
    cout<<"Enter the sentence :\n";
     getline(cin,s);
    
    int words=0;//to store the number of words
    trimstring(s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' '||s[i]=='.'||i==(s.size()-1))
        {
            words++;
        }
    }
    cout<<"Number of words in the sentences : "<<words;
    return 0;
}