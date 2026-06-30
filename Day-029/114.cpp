//WAP to Create menu-driven array operations system

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0;
    int choice, value, pos, i;
    do
    {
        cout<<"\n========== ARRAY MENU ==========\n";
        cout<<"1. Create Array\n";
        cout<<"2. Display Array\n";
        cout<<"3. Insert Element\n";
        cout<<"4. Delete Element\n";
        cout<<"5. Search Element\n";
        cout<<"6. Update Element\n";
        cout<<"7. Find Maximum\n";
        cout<<"8. Find Minimum\n";
        cout<<"9. Sum of Elements\n";
        cout<<"10. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter size: ";
            cin>>n;
            cout<<"Enter "<<n<<" elements:\n";
            for (i=0;i<n;i++)
                cin>>arr[i];
            break;

        case 2:
            if (n==0)
                cout<<"Array is Empty.\n";
            else
            {
                cout<<"Array: ";
                for (i=0;i < n;i++)
                    cout<<arr[i] << " ";
                cout<<endl;
            }
            break;

        case 3:
            cout<<"Enter Position: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>value;

            if (pos<1 || pos>n + 1)
                cout<<"Invalid Position\n";
            else
            {
                for (i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;
                cout<< "Element Inserted.\n";
            }
            break;

        case 4:
            cout<< "Enter Position to Delete: ";
            cin>> pos;

            if (pos < 1 || pos > n)
                cout<< "Invalid Position\n";
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                cout<< "Element Deleted.\n";
            }
            break;

        case 5:
            cout<< "Enter Element to Search: ";
            cin>> value;

            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    cout<< "Found at Position " << i + 1 << endl;
                    break;
                }
            }

            if (i == n)
                cout<< "Element Not Found.\n";
            break;

        case 6:
            cout<< "Enter Position: ";
            cin>> pos;

            if (pos < 1 || pos > n)
                cout<< "Invalid Position\n";
            else
            {
                cout<< "Enter New Value: ";
                cin>> value;
                arr[pos - 1] = value;
                cout<< "Element Updated.\n";
            }
            break;

        case 7:
            if (n == 0)
                cout<< "Array Empty.\n";
            else
            {
                int max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];

                cout<< "Maximum = " << max << endl;
            }
            break;

        case 8:
            if (n == 0)
                cout << "Array Empty.\n";
            else
            {
                int min = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];

                cout<<"Minimum = "<< min <<endl;
            }
            break;

        case 9:
        {
            int sum = 0;
            for (i=0;i<n;i++)
                sum+=arr[i];

            cout<<"Sum ="<<sum<<endl;
            break;
        }

        case 10:
            cout<<"Exiting Program...\n";
            break;

        default:
            cout<<"Invalid Choice!\n";
        }

    } while(choice != 10);

    return 0;
}