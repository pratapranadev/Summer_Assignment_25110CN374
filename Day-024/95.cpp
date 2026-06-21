// WAP to  Find longest word
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :\n";
     getline(cin,s);
     string longest_word="";
     int max=0;//to store the length of longest word
     int n=s.size();
     string word="";
     for(int i=0;i<n-1;i++)
     {
        if(s[i]==' ')
        {
            if(word.size()>max)
            {
                max=word.size();
                longest_word=word;
               
            }
             word="";
        }
        else if(i+1==n||s[i+1]=='.')
        {
            word+=s[i];
             if(word.size()>max)
            {
                max=word.size();
                longest_word=word;

            }
            break;
        }
        word+=s[i];

     }
     cout<<"Longest word in the string :\n"<<longest_word;
  
}