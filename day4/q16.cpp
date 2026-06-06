#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers are: " << endl;

    for (int num = start; num <= end; num++) {
        int temp = num, digits = 0;
        int sum = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate sum of powers
        while (temp != 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}