#include <stdio.h>

int main() {
    int A, B, C, X; // Topics Chef prepared and the assigned topic
    scanf("%d %d %d %d", &A, &B, &C, &X);
    
    // Check if the assigned topic matches any of the prepared topics
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}