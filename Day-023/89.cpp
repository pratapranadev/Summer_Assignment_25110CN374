//WAP to Find first non-repeating character
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string :\n";
    cin>>s;
    int n=s.size();
    char c=' ';
    int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            if(arr[s[i]-'a']==0){
                int count=0;
            for(int j=i;j<n;j++)
            {
                if(s[i]==s[j])
                count++;
            }
            arr[s[i]-'a']=count;
            if(count==1)
            {
                 c=s[i];
                 break;
            }
        }
    }
         if(c!=' ')
        cout<<"First non-repeating character :"<<c;

 }
    