//WAP to Create number guessing game
#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> num(1, 100);
    string s;
    cout<<"##########-WELCOME TO NUMBER GUESSING GAME-#########\n";
    cout<<"******************TO START PRESS ENTER***************\n";
    cin.get();
    while(true)
    {
         cout<<"******Guess a Number between 1 and 100******\n";
        int n;
         int val=num(gen);
        int attempts=0;
        do{
         cout<<"Enter your guess :\n";
         cin>>n;attempts++;
         if(n<val)
         {
              cout << "Too Low! Try Again.\n" << endl;
              
         }
         else if(n>val)
         {
              cout << "Too High! Try Again.\n" << endl;
         }
         else{
            cout<<"Congratulations! You guessed the number.\n"<<endl;
            cout<<"Total Attempts:\n "<<attempts<<endl;
         }
        }while(n!=val);
        
        cout<<"------To play again press enter (y/n)-------\n";
        char ch;
        cin>>ch;
        if(ch=='n'||ch=='N')
        {
            cout<<"Thanks for playing the game!";
            break;
        }

    }
    
}

