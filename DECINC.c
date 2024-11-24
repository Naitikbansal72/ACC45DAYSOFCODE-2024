#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", (N % 4 == 0) ? N + 1 : N - 1);
    return 0;
}