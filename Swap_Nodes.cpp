#include <stdio.h>
#include <stdlib.h>

int leftChild[10001];
int rightChild[10001];
int result[10001];
int count;

void swapAtDepth(int node, int depth, int k)
{
    if (node == -1)
        return;

    if (depth % k == 0)
    {
        int temp = leftChild[node];
        leftChild[node] = rightChild[node];
        rightChild[node] = temp;
    }

    swapAtDepth(leftChild[node], depth + 1, k);
    swapAtDepth(rightChild[node], depth + 1, k);
}

void inorder(int node)
{
    if (node == -1)
        return;

    inorder(leftChild[node]);

    result[count++] = node;

    inorder(rightChild[node]);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &leftChild[i], &rightChild[i]);
    }

    int t;
    scanf("%d", &t);

    for (int q = 0; q < t; q++)
    {
        int k;
        scanf("%d", &k);

        /* Swap required levels */
        swapAtDepth(1, 1, k);

        /* In-order traversal */
        count = 0;
        inorder(1);

        /* Print result */
        for (int i = 0; i < count; i++)
        {
            printf("%d", result[i]);

            if (i < count - 1)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

