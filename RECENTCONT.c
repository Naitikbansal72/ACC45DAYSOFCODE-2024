#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read number of problems

        int start38_count = 0, ltime108_count = 0;
        
        // Process each contest code
        for (int i = 0; i < N; i++) {
            char code[10];
            scanf("%s", code);

            // Count the occurrences of each contest code
            if (strcmp(code, "START38") == 0) {
                start38_count++;
            } else if (strcmp(code, "LTIME108") == 0) {
                ltime108_count++;
            }
        }

        // Print the result for the current test case
        printf("%d %d\n", start38_count, ltime108_count);
    }

    return 0;
}