#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z); // Inputs

        int free_space = S - (X + Y); // Calculate available free space

        if (free_space >= Z) {
            printf("0\n"); // No app needs to be deleted
        } else if (free_space + X >= Z || free_space + Y >= Z) {
            printf("1\n"); // Deleting one app is enough
        } else {
            printf("2\n"); // Both apps need to be deleted
        }
    }

    return 0;
}