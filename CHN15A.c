#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K, count = 0;
        scanf("%d %d", &N, &K);

        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);
            
            // Check if the mutated characteristic is divisible by 7
            if ((characteristic + K) % 7 == 0) {
                count++;
            }
        }

        // Output the result for this test case
        printf("%d\n", count);
    }

    return 0;
}