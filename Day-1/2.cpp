//WAP to proint multiplication table of a given number
#include <iostream>
using namespace std;
int main()
{
      int num;
      cout<<"Enter the number:\n";
      cin>>num;
      cout<<"Multiplication Table of "<<num<<" :"<<endl;
    for(int i=1;i<=10;i++)
    {
           cout<<num<< " * "<<i<<" = "<<(num*i)<<endl;
    }
}