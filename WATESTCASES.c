#include <stdio.h>

int main() {
    int T, N, S[100], smallest;
    char V[101];
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) scanf("%d", &S[i]);
        scanf("%s", V);

        smallest = 101;
        for (int i = 0; i < N; i++) 
            if (V[i] == '0' && S[i] < smallest) 
                smallest = S[i];

        printf("%d\n", smallest);
    }

    return 0;
}