#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int bookId[MAX];
    string bookName[MAX], author[MAX];
    bool issued[MAX];

    int n = 0, choice, searchId;
    bool found;

    do
    {
        cout << "\n===== MINI LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Book ID: ";
                cin >> bookId[n];
                cin.ignore();

                cout << "Enter Book Name: ";
                getline(cin, bookName[n]);

                cout << "Enter Author Name: ";
                getline(cin, author[n]);

                issued[n] = false;
                n++;

                cout << "Book Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Books Available!\n";
                }
                else
                {
                    cout << "\n----- Book List -----\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nBook " << i + 1 << endl;
                        cout << "Book ID   : " << bookId[i] << endl;
                        cout << "Book Name : " << bookName[i] << endl;
                        cout << "Author    : " << author[i] << endl;
                        cout << "Status    : " << (issued[i] ? "Issued" : "Available") << endl;
                    }
                }
                break;

            case 3:
                cout << "\nEnter Book ID to Search: ";
                cin >> searchId;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == searchId)
                    {
                        cout << "\nBook Found\n";
                        cout << "Book Name : " << bookName[i] << endl;
                        cout << "Author    : " << author[i] << endl;
                        cout << "Status    : " << (issued[i] ? "Issued" : "Available") << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;

            case 4:
                cout << "\nEnter Book ID to Issue: ";
                cin >> searchId;
                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == searchId)
                    {
                        found = true;

                        if(!issued[i])
                        {
                            issued[i] = true;
                            cout << "Book Issued Successfully!\n";
                        }
                        else
                        {
                            cout << "Book is Already Issued!\n";
                        }
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

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