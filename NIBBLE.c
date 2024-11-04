#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Input number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Input memory in bits for each test case

        // Check if N is a multiple of 4
        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }

    return 0;
}