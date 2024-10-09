#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        
        // Calculate the minimum flips required
        int min_flips = (X < (N - X)) ? X : (N - X);
        
        // Output the result
        printf("%d\n", min_flips);
    }
    
    return 0;
}