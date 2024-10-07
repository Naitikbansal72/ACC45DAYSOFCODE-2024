#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y; // Time to solve Problem A and B
        scanf("%d %d", &X, &Y);
        
        // Calculate scores for both orders
        int scoreA_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int scoreB_first = (1000 - 4 * Y) + (500 - 2 * (Y + X));
        
        // Find the maximum score
        int maxScore = (scoreA_first > scoreB_first) ? scoreA_first : scoreB_first;
        
        // Output the maximum score
        printf("%d\n", maxScore);
    }

    return 0;
}