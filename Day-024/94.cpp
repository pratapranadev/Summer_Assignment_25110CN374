//WAP to Compress a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin>>s;
    string ans = "";
    int n = s.size();
    for (int i = 0; i < n; )
    {
        char ch = s[i];
        int count=0;

        while (i<n && s[i] == ch)
        {
            count++;
            i++;
        }

        ans += ch;
        ans += to_string(count);
    }

    cout << "Compressed string :"<< ans << endl;

    return 0;
}