//WAP to Create mini library system
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id[100], n = 0, choice, searchId, i;
    string title[100], author[100];

    do
    {
        cout<<"\n===== MINI LIBRARY SYSTEM =====\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Books\n";
        cout<<"3. Search Book\n";
        cout<<"4. Update Book\n";
        cout<<"5. Delete Book\n";
        cout<<"6. Total Books\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout<<"Enter Book ID: ";
            cin>>id[n];
            cin.ignore();
            cout<<"Enter Book Title: ";
            getline(cin, title[n]);
            cout<<"Enter Author Name: ";
            getline(cin, author[n]);
            n++;
            cout<<"Book Added Successfully.\n";
            break;

        case 2:
            for (i=0;i<n;i++)
            {
                cout<<"\nBook ID: " << id[i];
                cout<<"\nTitle: " << title[i];
                cout<<"\nAuthor: " << author[i] << "\n";
            }
            break;

        case 3:
            cout<<"Enter Book ID: ";
            cin>>searchId;
            for (i =0;i<n;i++)
            {
                if (id[i]==searchId)
                {
                    cout << "\nTitle: " << title[i];
                    cout << "\nAuthor: " << author[i] << endl;
                    break;
                }
            }
            if (i==n)
                cout << "Book Not Found.\n";
            break;

        case 4:
            cout << "Enter Book ID: ";
            cin >> searchId;
            cin.ignore();
            for (i = 0; i < n; i++)
            {
                if (id[i]==searchId)
                {
                    cout<<"Enter New Title: ";
                    getline(cin, title[i]);
                    cout<<"Enter New Author: ";
                    getline(cin, author[i]);
                    cout<<"Book Updated Successfully.\n";
                    break;
                }
            }
            break;

        case 5:
            cout<<"Enter Book ID: ";
            cin >> searchId;
            for (i=0; i<n;i++)
            {
                if(id[i] == searchId)
                {
                    for(int j = i; j < n - 1; j++)
                    {
                        id[j] = id[j + 1];
                        title[j] = title[j + 1];
                        author[j] = author[j + 1];
                    }
                    n--;
                    cout<<"Book Deleted Successfully.\n";
                    break;
                }
            }
            break;

        case 6:
            cout<<"Total Books: " << n << endl;
            break;

        case 7:
            cout<<"Thank You!\n";
            break;

        default:
            cout<<"Invalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}