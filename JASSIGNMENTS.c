#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X; // Start time
        scanf("%d", &X);
        
        // Determine if Janmansh can complete the assignments on time
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}

