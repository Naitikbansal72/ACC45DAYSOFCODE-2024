#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n); // Number of rounds

    int max_lead = 0;
    int winner = 0;
    int cumulative_score1 = 0;
    int cumulative_score2 = 0;

    for (int i = 0; i < n; i++) {
        int score1, score2;
        scanf("%d %d", &score1, &score2);

        // Update cumulative scores
        cumulative_score1 += score1;
        cumulative_score2 += score2;

        // Calculate the current lead
        int lead = abs(cumulative_score1 - cumulative_score2);

        // Determine the leader and update max lead if current lead is greater
        if (cumulative_score1 > cumulative_score2) {
            if (lead > max_lead) {
                max_lead = lead;
                winner = 1;
            }
        } else {
            if (lead > max_lead) {
                max_lead = lead;
                winner = 2;
            }
        }
    }

    // Output the winner and the maximum lead
    printf("%d %d\n", winner, max_lead);
    return 0;
}