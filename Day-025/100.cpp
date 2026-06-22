//WAP to Sort words by length
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a sentence:\n";
    getline(cin, s);
    vector<string> words;
    string word = "";
    // Split sentence into words
    for(char ch : s)
    {
        if(ch == ' ')
        {
            if(!word.empty())
            {
                words.push_back(word);
                word = "";
            }
        }
        else
            word += ch;
    }
    if(!word.empty())
        words.push_back(word);
    //sorting words by length
    int n = words.size();

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(words[j].length() > words[j+1].length())
            {
                swap(words[j], words[j+1]);
            }
        }
    }

    cout << "Words sorted by length:\n";
    for(string w : words)
        cout << w << " ";
}