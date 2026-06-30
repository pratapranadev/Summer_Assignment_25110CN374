//WAP to Create student record system using arrays and strings

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int roll[100], marks[100], n = 0;
    string name[100];
    int choice, r, i;
    do
    {
        cout<< "\n===== STUDENT RECORD SYSTEM =====\n";
        cout<< "1. Add Student\n";
        cout<< "2. Display Students\n";
        cout<< "3. Search Student\n";
        cout<< "4. Update Marks\n";
        cout<< "5. Delete Student\n";
        cout<< "6. Exit\n";
        cout<< "Enter Choice: ";
        cin>> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout<< "Enter Roll No: ";
            cin>> roll[n];
            cin.ignore();
            cout<< "Enter Name: ";
            getline(cin, name[n]);
            cout<< "Enter Marks: ";
            cin>> marks[n];
            n++;
            break;

        case 2:
            for (i = 0; i < n; i++)
                cout<< "\nRoll: " << roll[i]<< "\nName: " << name[i]<< "\nMarks: " << marks[i] << "\n";
            break;

        case 3:
            cout<<"Enter Roll No: ";
            cin>>r;
            for (i = 0;i<n;i++)
                if(roll[i]==r)
                    cout << "\nName: " << name[i]
                         << "\nMarks: " << marks[i] << endl;
            break;

        case 4:
            cout<<"Enter Roll No: ";
            cin>>r;
            for (i=0; i<n;i++)
                if (roll[i]==r)
                {
                    cout<<"Enter New Marks: ";
                    cin>>marks[i];
                }
            break;

        case 5:
            cout<<"Enter Roll No: ";
            cin>>r;
            for (i = 0; i < n; i++)
            {
                if (roll[i]==r)
                {
                    for (int j=i; j< n - 1;j++)
                    {
                        roll[j]=roll[j + 1];
                        name[j]=name[j + 1];
                        marks[j]=marks[j + 1];
                    }
                    n--;
                    cout<<"Record Deleted.\n";
                    break;
                }
            }
            break;

        case 6:
            cout<<"Program Ended.\n";
            break;

        default:
            cout<<"Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}