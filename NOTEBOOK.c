#include <stdio.h>

int calculate_notebooks(int N) {
    return N * 10;  // Directly returning the expected output as per your requirement
}

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    int results[T];

    // Process each test case
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);  // Read the weight of pulp
        results[i] = calculate_notebooks(N);  // Calculate number of notebooks
    }

    // Output results for each test case
    for (int i = 0; i < T; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}