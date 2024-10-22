#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int R[4]; // Array to store referee decisions
        int isInside = 1; // Assume ball is inside (IN) initially

        // Read the 4 referee decisions
        for (int i = 0; i < 4; i++) {
            scanf("%d", &R[i]);
            if (R[i] == 1) {
                isInside = 0; // If any referee says OUT, set to OUT
            }
        }

        // Output result
        if (isInside) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }

    return 0;
}