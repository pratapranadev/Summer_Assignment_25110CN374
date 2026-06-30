//WAP to Develop complete mini project using arrays, strings and functions
/*This mini-project is based on employee record Management System with enhanced properties
 For login
 Intial
 username:admin
 password:admin123#
 */
#include<iostream>
#include <vector>
#include<string>
using namespace std;
const string USERNAME = "admin";
string PASSWORD = "admin123#";
class Employee 
{ 
    private:
    int Employee_id;
    string Employee_name;
    string DOB;
    string phone;
    string email;
    string designation;
    string department;
    double salary;
    int YearsOfExperience;
     public:
    //to access Employee_id
    void setEmployeeid (int id)
    {
       Employee_id=id;
    }
    const int & getEmployeeid ()const
    {
        return Employee_id;
    }
    //to access Employee_name

    void setname (const string & name)
    {  
        
        Employee_name=name;
    }
    const string &getname ()const
    {
        return Employee_name;
    }
    //to access DateofBirth

    void setDOB(const string & Dob)
    {
        DOB=Dob;
    }
    const string &getDOB()const
    {
        return DOB;
    }
    //to access phone number

     void setphone(const string & phone)
    {
        this->phone=phone;
    }
    const string &getphone()const
    {
        return phone;
    }
    //to access email

     void set_email(const string & email)
    {
        this->email=email;
    }
    const string &get_email()const
    {
        return email;
    }
    //to access designation

     void setDesignation(const string & designation)
    {
        this->designation=designation;
    }
    const string &getDesignation()const
    {
        return designation;
    }
    //to access department

     void setDepartment(const string & department)
    {
        this->department=department;
    }
    const string &getDepartment()const
    {
       return department;
    }
    // to access salary

     void setsalary(const double & salary)
    {
        this->salary=salary;
    }
    const double &getsalary()const
    {
        return salary;
    }
    // to access years of Experience
     void setExperience(const int & experience)
    {
       YearsOfExperience=experience;
    }
    const int &getExperience()const
    {
        return  YearsOfExperience;
    }
};

vector<Employee> employee;
     bool login()
     {    string username,password;
         cout << "===== LOGIN =====\n";
         cout << "Username: ";
         cin >> username;
         cout << "Password: ";
         cin >> password;
         cin.ignore();
        if(username == USERNAME && password == PASSWORD)
        {
        cout << "\nLogin Successful!\n";
        return true;
        }

    cout << "\nInvalid Username or Password!\n";
    return false;
     }

     void changepassword()
     {
        string new_password;
        cout<<"\n Enter the new password :\n";
        cin>>new_password;
        string curr_password;
        cout<<"\nEnter the password again :\n";
        cin>>curr_password;
        if(new_password==curr_password)
        {
            PASSWORD=new_password;
        }
        else
        cout<<"\nEntered Password does not matches.\n";
     }
     void addEmployee()
     {
         int id;
         string name;
         string Dob;
         string phone;
         string email;
         string designation;
         string department;
         double salary;
         int experience;
   
         Employee emp;

         cout<<"Enter id :";
         cin>>id;
         cin.ignore();
         cout<<"Enter Name :";
         getline(cin,name);
         cout<<"Enter Date-of-Birth (DD-MM-YYYY):";
         getline(cin,Dob);
         cout<<"Enter Phone-Number :";
         getline(cin,phone);
         cout<<"Enter Email-id :";
         getline(cin,email);
         cout<<"Enter Designation :";
         getline(cin,designation);
         cout<<"Enter Department :";
         getline(cin,department);
         cout<<"Enter Salary :";
         cin>>salary;
         cout<<"Enter No. of Years-Of-Experience :";
         cin>>experience;
         cin.ignore();
         //set all values
         emp.setEmployeeid(id);
         emp.setname(name);
         emp.setDOB(Dob);
         emp.setphone(phone);
         emp.set_email(email);
         emp.setDesignation(designation);
         emp.setDepartment(department);
         emp.setsalary(salary);
         emp.setExperience(experience);
         
         employee.push_back(emp);
         cout<<"\n Employee added Sucessfully.\n";

     }
     void displayEmployees( const Employee &emp)
     { 
          cout<<"Details of the Employee :\n";
          cout<<"Employee Id :"<<emp.getEmployeeid();
          cout<<"\nName :"<<emp.getname();
          cout<<"\nDOB :"<<emp.getDOB();
          cout<<"\nPhone :"<<emp.getphone();
          cout<<"\nEmail-id :"<<emp.get_email();
          cout<<"\nDesignation :"<<emp.getDesignation();
          cout<<"\nDepartment :"<<emp.getDepartment();
          cout<<"\nSalary :"<<emp.getsalary();
          cout<<"\ngetExperience :"<<emp.getExperience();
          cout<<"\n Details of Employee Displayed Successfully.\n";
     
     }
     void searchEmployee()
     {
            int id;
            cout<<"Enter the Employee Id :";
            cin>>id;
            int idx=-1;
            for(int i=0;i<employee.size();i++)
            {
                if(employee[i].getEmployeeid ()==id)
                {
                   idx=i;
                }
            }
            if(idx>=0)
                displayEmployees(employee[idx]);
             else
                cout<<"\n Employee not found.\n";
            
     }
     void updateEmployee()
     {
          int id;
          cout<<"Enter the Employee id to update :";
          cin>>id;
          cin.ignore();
          for(int i=0;i<employee.size();i++)
          {
               if(employee[i].getEmployeeid()==id)
               {
                   int choice;
                    cout<<"\n1.Name\n";
                    cout<<"\n1.DOB\n";
                    cout<<"\n1.Phone\n";
                    cout<<"\n1.Email\n";
                    cout<<"\n1.Designation\n";
                    cout<<"\n1.Department\n";
                    cout<<"\n1.Salary\n";
                    cout<<"\n1.Experience\n";
                    
                    switch(choice)
                    {
                        case 1:
                        {
                             string name;
                             cout<<"Enter new Name :";
                             getline(cin,name);
                             employee[i].setname(name);
                             break;
                        }
                        case 2:
                        {
                             string DOB;
                             cout<<"Enter new Date-Of-Birth(DD-MM-YYYY) :";
                             getline(cin,DOB);
                             employee[i].setDOB(DOB);
                             break;
                        }
                        case 3:
                        {
                             string phone;
                             cout<<"Enter new phone :";
                             getline(cin,phone);
                             employee[i].setphone(phone);
                             break;

                        }
                        case 4:
                        {
                             string email;
                             cout<<"Enter new email :";
                             getline(cin,email);
                             employee[i].set_email(email);
                             break;

                        }
                        case 5:
                        {
                             string  designation;
                             cout<<"Enter new Designation :";
                             getline(cin,designation);
                             employee[i].setDesignation(designation);
                             break;

                        }
                        case 6:
                        {
                             string department;
                             cout<<"Enter new Department :";
                             getline(cin,department);
                             employee[i].setDepartment(department);
                             break;

                        }
                        case 7:
                        {
                             double salary;
                             cout<<"Enter new Salary :";
                             cin>>salary;
                             employee[i].setsalary(salary);
                             break;

                        }
                        case 8:
                        {
                             int experience;
                             cout<<"Enter new years-of-experience :";
                             cin>>experience;
                             employee[i].setExperience(experience);
                             break;

                        }
                        case 9:
                        {
                             string name;
                             cout<<"Enter new Name :";
                             getline(cin,name);
                             employee[i].setname(name);
                             break;

                        }
                        default:"\n Employee not found.\n";

                    }
                    cin.ignore();
                    cout<<"\n Employee data is updated successfully\n";
                     break;
               }
          }
            
     }
     void deleteEmployee()
     {
        int id;
        cout<<"Enter Employee id:\n";
        cin>>id;
        for(int i=0;i<employee.size();i++)
        {
            if(employee[i].getEmployeeid()==id)
            {
                employee.erase(i+employee.begin());
                cout<<"\nEmployee data removed Successfully. \n";
                break;
            }
        }
     }
     void employeeCount()
     {
         cout<<"\nNumbers of Employees : "<<employee.size();
     }


    int main()
     {

    
    int choice;
      
    do
    {
        while(true)
        {
            if(login()==true)
            {
                break;
            }
            else
            {
                cout<<"\nWrong password!Enter the password again.\n";
            

            }
        }
        cout << "\n=====================================\n";
        cout << "      EMPLOYEE MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Employee Count\n";
        cout << "7.Change Password\n";
        cout << "0. Exit\n";
        cout << "-------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if(cin.fail())
      {
        cin.clear();
        cin.ignore(1000, '\n');
       cout << "Invalid Choice!\n";
       continue;
       }
        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            if (employee.empty())
                cout << "No employee records found.\n";
            else
            {
                for (const auto &emp : employee)
                {
                    displayEmployees(emp);
                    cout << "---------------------------------\n";
                }
            }
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            deleteEmployee();
            break;

        case 6:
            employeeCount();
            break;

         case 7:
         cin.clear();
          cin.ignore(1000, '\n');
           changepassword();
           break;   

        case 0:
            cout << "Thank you for using Employee Management System.\n";
            break;

        default:
            cout << "Invalid Choice! Please try again.\n";
        }

    } while (choice != 0);
    
    return 0;
}