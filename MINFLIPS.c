#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, ones, sum;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        ones = sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            sum += x;
            if (x == 1) ones++;
        }

        if (abs(sum) % 2 != 0) {
            printf("-1\n");
        } else {
            printf("%d\n", abs(sum) / 2);
        }
    }

    return 0;
}