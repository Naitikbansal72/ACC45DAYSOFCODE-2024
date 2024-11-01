#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int A, B, C, D;
        scanf("%d %d", &A, &B); // Initial score A:B
        scanf("%d %d", &C, &D); // Desired score C:D

        // Check if C >= A and D >= B
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}