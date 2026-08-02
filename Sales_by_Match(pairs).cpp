#include <stdio.h>

int sockMerchant(int n, int ar[]) {
    int count[101] = {0};
    int pairs = 0;

    // Count each sock color
    for (int i = 0; i < n; i++) {
        count[ar[i]]++;
    }

    // Calculate pairs
    for (int i = 0; i <= 100; i++) {
        pairs += count[i] / 2;
    }

    return pairs;
}

int main() {
    int n;

    // Read number of socks
    scanf("%d", &n);

    int ar[n];

    // Read sock colors
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Call function and print result
    int result = sockMerchant(n, ar);

    printf("%d\n", result);

    return 0;
}
