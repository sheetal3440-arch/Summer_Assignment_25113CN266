#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cin >> n;

    while (n > 0) {
        count += (n & 1);
        n = n >> 1;
    }

    cout << "Set bits = " << count;

    return 0;
}