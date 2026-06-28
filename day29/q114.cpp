#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, i;
    int key, found = 0;

    cout << "Enter the size of array: ";
    cin >> n;

    do
    {
        cout << "\n===== MENU DRIVEN ARRAY OPERATIONS =====";
        cout << "\n1. Insert Elements";
        cout << "\n2. Display Array";
        cout << "\n3. Find Maximum";
        cout << "\n4. Find Minimum";
        cout << "\n5. Find Sum";
        cout << "\n6. Search Element";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter " << n << " elements:\n";
                for(i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                cout << "Elements inserted successfully.\n";
                break;

            case 2:
                cout << "Array Elements: ";
                for(i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
            {
                int max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max << endl;
                break;
            }

            case 4:
            {
                int min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min << endl;
                break;
            }

            case 5:
            {
                int sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                cout << "Sum of Elements = " << sum << endl;
                break;
            }

            case 6:
                cout << "Enter element to search: ";
                cin >> key;
                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element found at position " << i + 1 << endl;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Element not found.\n";

                break;

            case 7:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}