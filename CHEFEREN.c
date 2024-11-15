#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        int total_duration = 0;

        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) {
                total_duration += A; // Even-indexed episode
            } else {
                total_duration += B; // Odd-indexed episode
            }
        }

        printf("%d\n", total_duration);
    }

    return 0;
}