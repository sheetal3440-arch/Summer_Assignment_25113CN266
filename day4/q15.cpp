#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Count digits
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate sum of digits raised to the power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check Armstrong number
    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}