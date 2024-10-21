#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);  // Read N, X, and Y

        // Maximum marks Chef can achieve is N * X
        // If Y is a multiple of X and Y <= N * X, it is possible
        if (Y % X == 0 && Y <= N * X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}