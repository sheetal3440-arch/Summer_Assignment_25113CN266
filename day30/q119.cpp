#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int empId[MAX];
    string empName[MAX], department[MAX];
    float salary[MAX];

    int n = 0, choice, searchId;
    bool found;

    do
    {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Salary";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> empId[n];
                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName[n]);

                cout << "Enter Department: ";
                getline(cin, department[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Employee Records Found!\n";
                }
                else
                {
                    cout << "\n----- Employee Records -----\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee " << i + 1 << endl;
                        cout << "ID         : " << empId[i] << endl;
                        cout << "Name       : " << empName[i] << endl;
                        cout << "Department : " << department[i] << endl;
                        cout << "Salary     : " << salary[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "\nEnter Employee ID to Search: ";
                cin >> searchId;

                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == searchId)
                    {
                        cout << "\nEmployee Found\n";
                        cout << "ID         : " << empId[i] << endl;
                        cout << "Name       : " << empName[i] << endl;
                        cout << "Department : " << department[i] << endl;
                        cout << "Salary     : " << salary[i] << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Employee Not Found!\n";

                break;

            case 4:
                cout << "\nEnter Employee ID: ";
                cin >> searchId;

                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == searchId)
                    {
                        cout << "Current Salary: " << salary[i] << endl;
                        cout << "Enter New Salary: ";
                        cin >> salary[i];

                        cout << "Salary Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Employee Not Found!\n";

                break;

            case 5:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}