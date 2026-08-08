#include <stdio.h>

int heap[100000], size = 0;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void insert(int x)
{
    int i = size++;
    heap[i] = x;

    while (i > 0 && heap[(i - 1) / 2] > heap[i])
    {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void deleteValue(int x)
{
    int i;

    for (i = 0; i < size; i++)
        if (heap[i] == x)
            break;

    heap[i] = heap[--size];

    while (1)
    {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int s = i;

        if (l < size && heap[l] < heap[s]) s = l;
        if (r < size && heap[r] < heap[s]) s = r;

        if (s == i) break;

        swap(&heap[i], &heap[s]);
        i = s;
    }
}

int main()
{
    int q, type, x;
    scanf("%d", &q);

    while (q--)
    {
        scanf("%d", &type);

        if (type == 1)
        {
            scanf("%d", &x);
            insert(x);
        }
        else if (type == 2)
        {
            scanf("%d", &x);
            deleteValue(x);
        }
        else
            printf("%d\n", heap[0]);
    }

    return 0;
}
