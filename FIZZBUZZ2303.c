#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T); // Take input for the number of test cases
    
    while (T--) {
        scanf("%d", &N); // Take input for the number of players Chef is considering
        printf("%d\n", N * (N - 1)); // Output the total combinations
    }
    
    return 0;
}