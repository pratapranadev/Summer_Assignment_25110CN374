//WAP to  Create student record management system
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    int age;
    float marks;
};
vector<Student> students;
// Add Student
void addStudent()
{   Student s;
    cout<<"\nEnter Roll Number: ";
    cin >> s.rollNo;
    // Check duplicate roll number
    for (auto &st : students)
    {
        if (st.rollNo == s.rollNo)
        {
            cout<<"Roll Number already exists!\n";
            return;
        }
    }
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin, s.name);
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Marks: ";
    cin >> s.marks;
    students.push_back(s);
    cout<<"Student added successfully.\n";
}
// Display Students
void displayStudents()
{
    if (students.empty())
    {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\n*******************************************\n";
    cout << "Roll\tName\t\tAge\tMarks\n";
    cout << "*********************************************\n";

    for (auto &s : students)
    {
        cout<<s.rollNo<<"\t"<< s.name << "\t\t"<< s.age << "\t"<<s.marks << endl;
    }
}
// Search Student
void searchStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin>>roll;

    for (auto &s:students)
    {
        if (s.rollNo == roll)
        {
            cout<<"\nStudent Found\n";
            cout<<"Roll Number : " <<s.rollNo<<endl;
            cout<<"Name        : " <<s.name<<endl;
            cout<<"Age         : " <<s.age<<endl;
            cout<<"Marks       : "<<s.marks<<endl;
            return;
        }
    }

    cout << "Student not found.\n";
}
// Update Student
void updateStudent()
{
    int roll;
    cout<<"\nEnter Roll Number to Update: ";
    cin>>roll;

    for(auto &s : students)
    {
        if (s.rollNo == roll)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, s.name);

            cout << "Enter New Age: ";
            cin >> s.age;

            cout << "Enter New Marks: ";
            cin >> s.marks;

            cout << "Record updated successfully.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

// Delete Student
void deleteStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i<students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            students.erase(students.begin() + i);
            cout << "Record deleted successfully.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== Student Record Management ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}