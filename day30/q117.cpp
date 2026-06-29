#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int roll[MAX], age[MAX];
    string name[MAX];
    float marks[MAX];

    int n = 0, choice, searchRoll;
    bool found;

    do
    {
        cout << "\n===== Student Record Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> roll[n];

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, name[n]);

                cout << "Enter Age: ";
                cin >> age[n];

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found!\n";
                }
                else
                {
                    cout << "\n--- Student Records ---\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "Roll No : " << roll[i] << endl;
                        cout << "Name    : " << name[i] << endl;
                        cout << "Age     : " << age[i] << endl;
                        cout << "Marks   : " << marks[i] << endl;
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    cout << "\nNo Records Found!\n";
                    break;
                }

                cout << "\nEnter Roll Number to Search: ";
                cin >> searchRoll;

                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        cout << "\nStudent Found\n";
                        cout << "Roll No : " << roll[i] << endl;
                        cout << "Name    : " << name[i] << endl;
                        cout << "Age     : " << age[i] << endl;
                        cout << "Marks   : " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Student Not Found!\n";
                }
                break;

            case 4:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}