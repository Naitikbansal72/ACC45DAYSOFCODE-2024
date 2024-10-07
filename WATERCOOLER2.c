#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y); // Read X and Y

        // Calculate the maximum number of months
        long long M =(Y - 1) / X;
        // M = (Y // X) - 1

        // Ensure M is not negative
        if (M < 0) {
            M = 0;
        }

        printf("%lld\n", M); // Output the result
    }

    return 0;
}