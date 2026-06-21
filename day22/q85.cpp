#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    int start = 0;
    int end = str.length() - 1;
    bool palindrome = true;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            palindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (palindrome)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}