#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of terms in the polynomial
        scanf("%d", &N);
        
        int A[N]; // Array to store the coefficients
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        // Find the degree of the polynomial
        int degree = -1;
        for (int i = N - 1; i >= 0; i--) {
            if (A[i] != 0) {
                degree = i;
                break;
            }
        }
        
        // Output the degree of the polynomial
        printf("%d\n", degree);
    }
    
    return 0;
}