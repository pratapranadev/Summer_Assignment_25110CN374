//Write a program to Count set bits in a number
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:";
    cin>>N;
    int temp=N;
    int count=0;//to store number of set bits
    while(temp>0)
    {
         if(temp&1)
         {
            count++;
         }
         temp=temp>>1;
    }
    cout<<"Number of set bits in "<<N<<" = "<<count;
}