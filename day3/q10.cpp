#include <stdio.h>
using namespace std;
int main() {
    int start, end, i, j, isPrime;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}