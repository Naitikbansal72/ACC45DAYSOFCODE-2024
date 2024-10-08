#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read positions of policeman and thief
        int time = abs(Y - X); // Calculate the time to catch the thief
        printf("%d\n", time); // Output the result
    }

    return 0;
}