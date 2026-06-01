// WAP to print armstrong number in range
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:\n";
    cin>>N;
    cout<<"Armstrong number [0"<<","<<N<<"] :"<<endl;
     for(int i=0;i<=N;i++)
        {
            int temp=i;//to store copy of i
            int count=0;//to store number of digits
    if(i==0)
    {
        count=1;
    }
    while(temp>0)
    {
        count++;
        temp/=10;
    }
    temp=i;
    double sum=0;
    while(temp>0)
    {
        int digit=temp%10;
        sum+=pow(digit,count);
        temp/=10;
    }
    if(i==(int)sum)
    {
        cout<<i<<" ";
        }
    }
}