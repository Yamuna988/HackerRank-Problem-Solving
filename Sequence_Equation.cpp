#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p[n + 1];
    int pos[n + 1];

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
        pos[p[i]] = i;
    }

    for (int x = 1; x <= n; x++) {
        printf("%d\n", pos[pos[x]]);
    }

    return 0;
}
