#include <stdio.h>
#include <stdlib.h>

char* angryProfessor(int k, int a_count, int* a) {
    int onTime = 0;

    for (int i = 0; i < a_count; i++) {
        if (a[i] <= 0) {
            onTime++;
        }
    }

    if (onTime < k) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int *a = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        printf("%s\n", angryProfessor(k, n, a));

        free(a);
    }

    return 0;
}
