#include <stdio.h>
#include <stdlib.h>

int hurdleRace(int k, int height_count, int* height) {
    int max = height[0];

    // Find the tallest hurdle
    for (int i = 1; i < height_count; i++) {
        if (height[i] > max) {
            max = height[i];
        }
    }

    // Calculate minimum potions needed
    if (max > k) {
        return max - k;
    }

    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int* height = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    int result = hurdleRace(k, n, height);

    printf("%d\n", result);

    free(height);

    return 0;
}
