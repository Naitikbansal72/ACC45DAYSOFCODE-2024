#include <stdio.h>

int count_tuesdays(int n) {
    // If n is less than 2, there can't be a Tuesday.
    if (n < 2) {
        return 0;
    }
    // First Tuesday occurs after 1 day, then every 7 days after that
    return 1 + (n - 2) / 7;
}

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases
    
    while (t--) {
        int n;
        scanf("%d", &n);  // Read the number of days for each test case
        printf("%d\n", count_tuesdays(n));
    }
    
    return 0;
}