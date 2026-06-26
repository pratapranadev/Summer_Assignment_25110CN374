// WAP to Create quiz application
#include <iostream>
using namespace std;
int main() {
    string questions[5] = {
        "1. What is the capital of India?",
        "2. Which language is most used for building and training LLM?",
        "3. How many days are there in a week?",
        "4. What is 1^1?",
        "5. Which planet is known as the Red Planet?"
    };
    string options[5][4] = {
        {"A. Delhi", "B. Mumbai", "C. Kolkata", "D. Chennai"},
        {"A. Python", "B. Java", "C. C++", "D. HTML"},
        {"A. 5", "B. 6", "C. 7", "D. 8"},
        {"A. 10", "B. 11", "C. 0", "D. 1"},
        {"A. Earth", "B. Mars", "C. Venus", "D. Jupiter"}
    };
    char answer[5] = {'A', 'A', 'C', 'C', 'B'};
    char userAnswer;
    int score = 0;

    cout << "====== QUIZ APPLICATION ======\n\n";

    for (int i = 0; i < 5; i++) {
        cout<<questions[i]<<endl;

        for (int j = 0; j < 4; j++) {
            cout<<options[i][j]<<endl;
        }

        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;

        if (toupper(userAnswer)==answer[i]) {
            cout<<"Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer is " << answer[i] << ".\n";
        }

        cout << endl;
    }

    cout << "========== RESULT ==========\n";
    cout<<"Your Score: "<<score<<" / 5\n";

    if (score == 5)
        cout<<"Excellent!\n";
    else if (score >= 3)
        cout<<"Good Job!\n";
    else
        cout<<"Better Luck Next Time!\n";

    return 0;
}