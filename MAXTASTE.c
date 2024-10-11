#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int a, b, c, d;
        // Read the tastiness values
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the maximum tastiness
        int max_tasty = a + c; // A + C
        if (a + d > max_tasty) max_tasty = a + d; // A + D
        if (b + c > max_tasty) max_tasty = b + c; // B + C
        if (b + d > max_tasty) max_tasty = b + d; // B + D

        // Output the result for this test case
        printf("%d\n", max_tasty);
    }

    return 0;
}