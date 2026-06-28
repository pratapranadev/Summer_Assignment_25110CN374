//WAP to Create marksheet generation system
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float percentage;
    char grade;
    string result;
};
vector<Student> students;
// Calculate Result
void calculate(Student &s)
{
    s.total = s.marks1 + s.marks2 + s.marks3 + s.marks4 + s.marks5;
    s.percentage = s.total / 5.0;

    if (s.marks1 < 33 || s.marks2 < 33 || s.marks3 < 33 ||
        s.marks4 < 33 || s.marks5 < 33)
    {
        s.result = "Fail";
        s.grade = 'F';
    }
    else
    {
        s.result = "Pass";

        if (s.percentage >= 90)
            s.grade = 'A';
        else if (s.percentage >= 75)
            s.grade = 'B';
        else if (s.percentage >= 60)
            s.grade = 'C';
        else if (s.percentage >= 45)
            s.grade = 'D';
        else
            s.grade = 'E';
    }
}
// Add Student
void addStudent()
{
    Student s;
    cout << "\nEnter Roll Number: ";
    cin >> s.rollNo;
    for (auto &st : students)
    {
        if (st.rollNo == s.rollNo)
        {
            cout << "Roll Number already exists!\n";
            return;
        }
    }
    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, s.name);
    cout << "Enter Marks of 5 Subjects:\n";
    cin >> s.marks1 >> s.marks2 >> s.marks3 >> s.marks4 >> s.marks5;
    calculate(s);
    students.push_back(s);
    cout << "Marksheet generated successfully.\n";
}

// Display All
void displayStudents()
{
    if (students.empty())
    {
        cout << "\nNo records found.\n";
        return;
    }
    cout << "\n=======================================================================================\n";
    cout << "Roll\tName\t\tTotal\tPercentage\tGrade\tResult\n";
    cout << "=======================================================================================\n";

    for (auto &s : students)
    {
        cout << s.rollNo << "\t"
             << s.name << "\t\t"
             << s.total << "\t"
             << s.percentage << "%\t\t"
             << s.grade << "\t"
             << s.result << endl;
    }
}
// Search Student
void searchStudent()
{
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (auto &s : students)
    {
        if (s.rollNo == roll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No     : " << s.rollNo << endl;
            cout << "Name        : " << s.name << endl;
            cout << "Subject 1   : " << s.marks1 << endl;
            cout << "Subject 2   : " << s.marks2 << endl;
            cout << "Subject 3   : " << s.marks3 << endl;
            cout << "Subject 4   : " << s.marks4 << endl;
            cout << "Subject 5   : " << s.marks5 << endl;
            cout << "Total       : " << s.total << endl;
            cout << "Percentage  : " << s.percentage << "%" << endl;
            cout << "Grade       : " << s.grade << endl;
            cout << "Result      : " << s.result << endl;
            return;
        }
    }

    cout << "Student not found.\n";
}

// Update Student
void updateStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Update: ";
    cin >> roll;

    for (auto &s : students)
    {
        if (s.rollNo == roll)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, s.name);

            cout << "Enter New Marks of 5 Subjects:\n";
            cin >> s.marks1 >> s.marks2 >> s.marks3 >> s.marks4 >> s.marks5;

            calculate(s);

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

    for (int i = 0; i < students.size(); i++)
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
        cout << "\n========== Marksheet Generation System ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Marksheets\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student Marks\n";
        cout << "5. Delete Student Record\n";
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
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}