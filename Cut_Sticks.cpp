#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int remaining = n;

    while (remaining > 0) {

        // Print number of sticks remaining
        printf("%d\n", remaining);

        // Find the smallest stick
        int min = 1000000;

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0 && arr[i] < min) {
                min = arr[i];
            }
        }

        // Cut all sticks
        remaining = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                arr[i] = arr[i] - min;

                if (arr[i] > 0) {
                    remaining++;
                }
            }
        }
    }

    return 0;
}
