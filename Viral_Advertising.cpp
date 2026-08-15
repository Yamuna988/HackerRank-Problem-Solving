#include <stdio.h>

int viralAdvertising(int n) {
    int people = 5;
    int total = 0;

    for (int day = 1; day <= n; day++) {
        int liked = people / 2;
        total += liked;
        people = liked * 3;
    }

    return total;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = viralAdvertising(n);

    printf("%d\n", result);

    return 0;
}
