#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    for (int i = 0; i < T; i++) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y);  // Read X and Y

        // Check if 2 * Y >= X
        if (2 * Y >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
