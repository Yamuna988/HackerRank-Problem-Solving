#include <stdio.h>

int main() {
    long long arr[5];
    long long sum = 0;
    long long min, max;

    for (int i = 0; i < 5; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];

        if (i == 0) {
            min = max = arr[i];
        } else {
            if (arr[i] < min)
                min = arr[i];
            if (arr[i] > max)
                max = arr[i];
        }
    }

    printf("%lld %lld\n", sum - max, sum - min);

    return 0;
}

