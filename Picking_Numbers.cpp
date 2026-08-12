#include <stdio.h>

int pickingNumbers(int a_count, int* a)
{
    int count[101] = {0};
    int max = 0;

    // Count each number
    for (int i = 0; i < a_count; i++)
    {
        count[a[i]]++;
    }

    // Check two consecutive numbers
    for (int i = 1; i <= 100; i++)
    {
        int total = count[i] + count[i - 1];

        if (total > max)
        {
            max = total;
        }
    }

    return max;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int answer = pickingNumbers(n, a);

    printf("%d\n", answer);

    return 0;
}
