#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);  // Reading H, X, Y for each test case

        // Calculate number of attacks without using the special attack
        int attacks = H / X;
        if (H % X != 0) attacks++;  // Adding one more attack if some health is left

        // Now check if using the special attack is beneficial
        // If we use the special attack first, we only need (H - Y) to be reduced with normal attacks
        if (H > Y) {
            int remaining_health = H - Y;
            int attacks_with_special = remaining_health / X;
            if (remaining_health % X != 0) attacks_with_special++;  // Adjust for remaining health
            attacks_with_special++;  // Add one for the special attack
            if (attacks_with_special < attacks) {
                attacks = attacks_with_special;  // Update attacks if using the special is better
            }
        } else {
            attacks = 1;  // If special attack is enough to defeat the boss
        }

        printf("%d\n", attacks);  // Output the minimum number of attacks for this test case
    }

    return 0;
}