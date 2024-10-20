#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B); // N: teams, A: round duration, B: break duration

        int rounds = log2(N); // Number of rounds = log2(N)
        int total_time = rounds * A + (rounds - 1) * B; // Total time = (rounds * round duration) + (breaks between rounds)

        printf("%d\n", total_time);
    }

    return 0;
}