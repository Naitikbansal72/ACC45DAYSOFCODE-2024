#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases
    
    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R); // Input X, Y, R
        
        // Calculate total sticks eaten (N)
        int extra_sticks = R / 30;
        int N = X + extra_sticks;

        // Calculate maximum plates needed
        int plates = (int)ceil((double)N / Y);
        printf("%d\n", plates);
    }

    return 0;
}