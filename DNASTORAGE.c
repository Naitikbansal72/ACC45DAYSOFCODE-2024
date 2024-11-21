#include <stdio.h>

int main() {
    int T, N;
    char S[1001];
    scanf("%d", &T); 

    while (T--) {
        scanf("%d %s", &N, S);
        for (int i = 0; i < N; i += 2) {
            printf("%c", (S[i] == '0' && S[i + 1] == '0') ? 'A' :
                         (S[i] == '0' && S[i + 1] == '1') ? 'T' :
                         (S[i] == '1' && S[i + 1] == '0') ? 'C' : 'G');
        }
        printf("\n");
    }
    return 0;
}