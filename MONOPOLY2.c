
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S); // Read profits for each company

        // Check for monopoly condition
        if (P > (Q + R + S) || Q > (P + R + S) || R > (P + Q + S) || S > (P + Q + R)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
