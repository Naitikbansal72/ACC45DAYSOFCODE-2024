#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);  // Read tastiness values
        
        // Calculate the four possible sums
        int sum1 = a + c;
        int sum2 = a + d;
        int sum3 = b + c;
        int sum4 = b + d;
        
        // Find the maximum of the four sums
        int max_tastiness = sum1;
        if (sum2 > max_tastiness) max_tastiness = sum2;
        if (sum3 > max_tastiness) max_tastiness = sum3;
        if (sum4 > max_tastiness) max_tastiness = sum4;
        
        // Print the result for this test case
        printf("%d\n", max_tastiness);
    }
    
    return 0;
}