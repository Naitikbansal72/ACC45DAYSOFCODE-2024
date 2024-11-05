#include <stdio.h>

int main() {
    int T, A, B, C;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        scanf("%d %d", &A, &B);  // Read A and B for each test case
        C = 21 - (A + B);  // Calculate the required C to make the sum 21

        // Check if C is within the valid range
        if (C >= 1 && C <= 10) {
            printf("%d\n", C);  // Print C if it's a valid number
        } else {
            printf("-1\n");  // Print -1 if C is not in the range
        }
    }

    return 0;
}