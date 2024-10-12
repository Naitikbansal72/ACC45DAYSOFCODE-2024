#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);  // Read N, K, M
        
        // Calculate the capacity of one bag
        int capacity_per_bag = K * M;
        
        // Calculate the number of bags needed
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag;
        
        // Output the result
        printf("%d\n", bags_needed);
    }
    
    return 0;
}