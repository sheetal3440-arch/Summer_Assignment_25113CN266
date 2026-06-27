#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    int id;
    string name;
    string phone;
    string email;
};

int main()
{
    Contact c[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n===== Contact Management System =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display All Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Update Contact";
        cout << "\n5. Delete Contact";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Contact ID: ";
                cin >> c[n].id;
                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, c[n].name);

                cout << "Enter Phone Number: ";
                getline(cin, c[n].phone);

                cout << "Enter Email: ";
                getline(cin, c[n].email);

                n++;
                cout << "\nContact Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Contacts Found!\n";
                }
                else
                {
                    cout << "\n------ Contact List ------\n";
                    for(i = 0; i < n; i++)
                    {
                        cout << "\nContact ID : " << c[i].id;
                        cout << "\nName       : " << c[i].name;
                        cout << "\nPhone      : " << c[i].phone;
                        cout << "\nEmail      : " << c[i].email << endl;
                    }
                }
                break;

            case 3:
                found = false;
                cout << "\nEnter Contact ID to Search: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(c[i].id == id)
                    {
                        cout << "\nContact Found:";
                        cout << "\nContact ID : " << c[i].id;
                        cout << "\nName       : " << c[i].name;
                        cout << "\nPhone      : " << c[i].phone;
                        cout << "\nEmail      : " << c[i].email << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nContact Not Found!\n";
                break;

            case 4:
                found = false;
                cout << "\nEnter Contact ID to Update: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(c[i].id == id)
                    {
                        cin.ignore();

                        cout << "Enter New Name: ";
                        getline(cin, c[i].name);

                        cout << "Enter New Phone Number: ";
                        getline(cin, c[i].phone);

                        cout << "Enter New Email: ";
                        getline(cin, c[i].email);

                        cout << "\nContact Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nContact Not Found!\n";
                break;

            case 5:
                found = false;
                cout << "\nEnter Contact ID to Delete: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(c[i].id == id)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            c[j] = c[j + 1];
                        }

                        n--;
                        cout << "\nContact Deleted Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nContact Not Found!\n";
                break;

            case 6:
                cout << "\nExiting Contact Management System...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}