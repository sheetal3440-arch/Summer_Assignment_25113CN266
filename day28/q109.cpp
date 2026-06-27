#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
    int quantity;
};

int main()
{
    Book b[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Update Book";
        cout << "\n5. Delete Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Book ID: ";
                cin >> b[n].bookId;
                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, b[n].title);

                cout << "Enter Author Name: ";
                getline(cin, b[n].author);

                cout << "Enter Quantity: ";
                cin >> b[n].quantity;

                n++;
                cout << "\nBook Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Books Available!\n";
                }
                else
                {
                    cout << "\n------ Library Books ------\n";
                    for(i = 0; i < n; i++)
                    {
                        cout << "\nBook ID   : " << b[i].bookId;
                        cout << "\nTitle     : " << b[i].title;
                        cout << "\nAuthor    : " << b[i].author;
                        cout << "\nQuantity  : " << b[i].quantity << endl;
                    }
                }
                break;

            case 3:
                found = false;
                cout << "\nEnter Book ID to Search: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(b[i].bookId == id)
                    {
                        cout << "\nBook Found:";
                        cout << "\nBook ID   : " << b[i].bookId;
                        cout << "\nTitle     : " << b[i].title;
                        cout << "\nAuthor    : " << b[i].author;
                        cout << "\nQuantity  : " << b[i].quantity << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nBook Not Found!\n";
                break;

            case 4:
                found = false;
                cout << "\nEnter Book ID to Update: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(b[i].bookId == id)
                    {
                        cin.ignore();

                        cout << "Enter New Title: ";
                        getline(cin, b[i].title);

                        cout << "Enter New Author: ";
                        getline(cin, b[i].author);

                        cout << "Enter New Quantity: ";
                        cin >> b[i].quantity;

                        cout << "\nBook Record Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nBook Not Found!\n";
                break;

            case 5:
                found = false;
                cout << "\nEnter Book ID to Delete: ";
                cin >> id;

                for(i = 0; i < n; i++)
                {
                    if(b[i].bookId == id)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            b[j] = b[j + 1];
                        }

                        n--;
                        cout << "\nBook Deleted Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nBook Not Found!\n";
                break;

            case 6:
                cout << "\nExiting Library Management System...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}