#include <stdio.h>

void countApplesAndOranges(int s, int t, int a, int b,
                           int apples_count, int apples[],
                           int oranges_count, int oranges[])
{
    int appleCount = 0;
    int orangeCount = 0;

    // Count apples
    for (int i = 0; i < apples_count; i++)
    {
        int position = a + apples[i];

        if (position >= s && position <= t)
        {
            appleCount++;
        }
    }

    // Count oranges
    for (int i = 0; i < oranges_count; i++)
    {
        int position = b + oranges[i];

        if (position >= s && position <= t)
        {
            orangeCount++;
        }
    }

    printf("%d\n", appleCount);
    printf("%d\n", orangeCount);
}

int main()
{
    int s, t;
    int a, b;
    int m, n;

    // Input house positions
    scanf("%d %d", &s, &t);

    // Input tree positions
    scanf("%d %d", &a, &b);

    // Number of apples and oranges
    scanf("%d %d", &m, &n);

    int apples[m];
    int oranges[n];

    // Apple distances
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &apples[i]);
    }

    // Orange distances
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &oranges[i]);
    }

    countApplesAndOranges(s, t, a, b, m, apples, n, oranges);

    return 0;
}

