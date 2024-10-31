#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases
    
    for (int i = 0; i < T; i++) {
        int P, Q;
        scanf("%d %d", &P, &Q); // Read scores for Alice and Bob
        
        int totalServes = P + Q;
        int turn = totalServes / 2; // Determine the turn based on total serves
        
        if (turn % 2 == 0) {
            printf("Alice\n"); // Even turn -> Alice
        } else {
            printf("Bob\n");   // Odd turn -> Bob
        }
    }

    return 0;
}