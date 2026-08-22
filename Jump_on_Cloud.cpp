#include <stdio.h>

int jumpingOnClouds(int c[], int n)
{
    int i = 0;
    int jumps = 0;

    while (i < n - 1)
    {
        if (i + 2 < n && c[i + 2] == 0)
        {
            i = i + 2;
        }
        else
        {
            i = i + 1;
        }

        jumps++;
    }

    return jumps;
}

int main()
{
    int n;
    scanf("%d", &n);

    int c[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);
    }

    printf("%d\n", jumpingOnClouds(c, n));

    return 0;
}
