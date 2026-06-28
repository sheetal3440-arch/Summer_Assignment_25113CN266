#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX = 100;

    int id[MAX], quantity[MAX];
    string name[MAX];
    float price[MAX];

    int n = 0, choice, searchId;
    bool found;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Product ID: ";
                cin >> id[n];

                cin.ignore();

                cout << "Enter Product Name: ";
                getline(cin, name[n]);

                cout << "Enter Quantity: ";
                cin >> quantity[n];

                cout << "Enter Price: ";
                cin >> price[n];

                n++;
                cout << "Product Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Products Available!\n";
                }
                else
                {
                    cout << "\n----- Product List -----\n";
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nProduct " << i + 1 << endl;
                        cout << "ID       : " << id[i] << endl;
                        cout << "Name     : " << name[i] << endl;
                        cout << "Quantity : " << quantity[i] << endl;
                        cout << "Price    : " << price[i] << endl;
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    cout << "\nNo Products Available!\n";
                    break;
                }

                cout << "\nEnter Product ID to Search: ";
                cin >> searchId;

                found = false;

                for(int i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        cout << "\nProduct Found\n";
                        cout << "ID       : " << id[i] << endl;
                        cout << "Name     : " << name[i] << endl;
                        cout << "Quantity : " << quantity[i] << endl;
                        cout << "Price    : " << price[i] << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Product Not Found!\n";
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