//WAP to Create menu-driven string operations system

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    int choice;

    do
    {
        cout<< "\n========== STRING MENU ==========\n";
        cout<< "1. Enter String\n";
        cout<< "2. Display String\n";
        cout<< "3. Find Length\n";
        cout<< "4. Copy String\n";
        cout<< "5. Concatenate String\n";
        cout<< "6. Compare Strings\n";
        cout<< "7. Reverse String\n";
        cout<< "8. Convert to Uppercase\n";
        cout<< "9. Convert to Lowercase\n";
        cout<< "10. Exit\n";
        cout<< "Enter Choice: ";
        cin>> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            cout<<"Enter String: ";
            getline(cin, str1);
            break;

        case 2:
            cout<< "String: " << str1 << endl;
            break;

        case 3:
            cout<< "Length = " << str1.length() << endl;
            break;

        case 4:
            str2 = str1;
            cout << "Copied String: " << str2 << endl;
            break;

        case 5:
            cout<< "Enter another String: ";
            getline(cin, str2);
            cout << "Concatenated String: " << str1 + str2 << endl;
            break;

        case 6:
            cout<< "Enter another String: ";
            getline(cin, str2);

            if (str1==str2)
                cout << "Strings are Equal\n";
            else
                cout<< "Strings are Not Equal\n";
            break;

        case 7:
        {
            string temp=str1;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String: " << temp << endl;
            break;
        }

        case 8:
        {
            string temp=str1;
            for (char &ch : temp)
                ch = toupper(ch);

            cout << "Uppercase: " << temp << endl;
            break;
        }

        case 9:
        {
            string temp = str1;
            for (char &ch : temp)
                ch = tolower(ch);

            cout<< "Lowercase: " << temp << endl;
            break;
        }

        case 10:
            cout<< "Exiting Program...\n";
            break;

        default:
            cout<< "Invalid Choice!\n";
        }

    } while (choice != 10);

    return 0;
}