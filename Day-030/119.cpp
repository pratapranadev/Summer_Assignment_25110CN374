//WAP to Create Mini Employee Management System
#include<iostream>
#include<string>
using namespace std;

int main()
{
int id[100],salary[100],n=0,choice,searchId,i;
string name[100];

do
{
cout<<"\n===== EMPLOYEE MANAGEMENT =====\n";
cout<<"1. Add Employee\n";
cout<<"2. Display Employees\n";
cout<<"3. Search Employee\n";
cout<<"4. Update Salary\n";
cout<<"5. Delete Employee\n";
cout<<"6. Employee Count\n";
cout<<"7. Exit\n";
cout<<"Enter Choice: ";
cin>>choice;
cin.ignore();

switch(choice)
{
case 1:
cout<<"Enter ID: ";
cin>>id[n];
cin.ignore();
cout<<"Enter Name: ";
getline(cin,name[n]);
cout<<"Enter Salary: ";
cin>>salary[n];
n++;
break;

case 2:
for(i=0;i<n;i++)
cout<<"\nID: "<<id[i]
<<"\nName: "<<name[i]
<<"\nSalary: "<<salary[i]<<"\n";
break;

case 3:
cout<<"Enter Employee ID: ";
cin>>searchId;
for(i=0;i<n;i++)
if(id[i]==searchId)
cout<<"\nName: "<<name[i]
<<"\nSalary: "<<salary[i]<<endl;
break;

case 4:
cout<<"Enter Employee ID: ";
cin>>searchId;
for(i=0;i<n;i++)
if(id[i]==searchId)
{
cout<<"Enter New Salary: ";
cin>>salary[i];
}
break;

case 5:
cout<<"Enter Employee ID: ";
cin>>searchId;
for(i=0;i<n;i++)
if(id[i]==searchId)
{
for(int j=i;j<n-1;j++)
{
id[j]=id[j+1];
name[j]=name[j+1];
salary[j]=salary[j+1];
}
n--;
cout<<"Employee Deleted.\n";
break;
}
break;

case 6:
cout<<"Total Employees: "<<n<<endl;
break;

case 7:
cout<<"Thank You!\n";
break;

default:
cout<<"Invalid Choice!\n";
}

}while(choice!=7);

return 0;
}