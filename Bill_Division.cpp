#include <stdio.h>

void bonAppetit(int bill_count, int* bill, int k, int b) {
    int total = 0;

    // Add the cost of items Anna ate
    for (int i = 0; i < bill_count; i++) {
        if (i != k) {
            total += bill[i];
        }
    }

    // Anna's correct share
    int annaShare = total / 2;

    // Check Brian's calculation
    if (b == annaShare) {
        printf("Bon Appetit\n");
    } else {
        printf("%d\n", b - annaShare);
    }
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int bill[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &bill[i]);
    }

    int b;
    scanf("%d", &b);

    bonAppetit(n, bill, k, b);

    return 0;
}
