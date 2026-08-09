#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int stack[100000];
    int top = -1;

    for (int i = 0; i < n; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int x;
            scanf("%d", &x);

            top++;
            stack[top] = x;
        }
        else if (type == 2) {
            top--;
        }
        else if (type == 3) {
            int max = stack[0];

            for (int j = 1; j <= top; j++) {
                if (stack[j] > max) {
                    max = stack[j];
                }
            }

            printf("%d\n", max);
        }
    }

    return 0;
}
