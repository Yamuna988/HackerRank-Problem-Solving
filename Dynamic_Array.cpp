#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);

    // Create n empty sequences
    int **seq = (int **)malloc(n * sizeof(int *));
    int *size = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        seq[i] = NULL;

    int lastAnswer = 0;

    for (int i = 0; i < q; i++)
    {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);

        int index = (x ^ lastAnswer) % n;

        if (type == 1)
        {
            size[index]++;
            seq[index] = realloc(seq[index], size[index] * sizeof(int));
            seq[index][size[index] - 1] = y;
        }
        else
        {
            lastAnswer = seq[index][y % size[index]];
            printf("%d\n", lastAnswer);
        }
    }

    return 0;
}
