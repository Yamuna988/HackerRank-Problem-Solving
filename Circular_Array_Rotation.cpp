#include <stdio.h>
#include <stdlib.h>

int* circularArrayRotation(int a_count, int* a, int k,
                           int queries_count, int* queries,
                           int* result_count) {
    
    *result_count = queries_count;

    int* result = malloc(queries_count * sizeof(int));

    // Avoid unnecessary rotations
    k = k % a_count;

    for (int i = 0; i < queries_count; i++) {
        // Find original index
        int index = (queries[i] - k + a_count) % a_count;

        // Store the answer
        result[i] = a[index];
    }

    return result;
}

int main() {
    int n, k, q;

    // Read n, k and q
    scanf("%d %d %d", &n, &k, &q);

    // Create array
    int* a = malloc(n * sizeof(int));

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Create queries array
    int* queries = malloc(q * sizeof(int));

    // Read queries
    for (int i = 0; i < q; i++) {
        scanf("%d", &queries[i]);
    }

    // Get results
    int result_count;
    int* result = circularArrayRotation(
        n, a, k, q, queries, &result_count
    );

    // Print results
    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }

    // Free memory
    free(a);
    free(queries);
    free(result);

    return 0;
}
