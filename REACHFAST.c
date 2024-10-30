#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);

        int distance = abs(B - A);
        int steps = (distance + K - 1) / K;  // Calculate the minimum steps
        printf("%d\n", steps);
    }

    return 0;
}