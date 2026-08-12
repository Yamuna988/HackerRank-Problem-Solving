#include <stdio.h>

int equalStacks(int n1, int h1[], int n2, int h2[], int n3, int h3[])
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int i = 0, j = 0, k = 0;

    // Find total heights
    for (int x = 0; x < n1; x++)
        sum1 += h1[x];

    for (int x = 0; x < n2; x++)
        sum2 += h2[x];

    for (int x = 0; x < n3; x++)
        sum3 += h3[x];

    // Remove from tallest stack
    while (!(sum1 == sum2 && sum2 == sum3))
    {
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= h1[i];
            i++;
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= h2[j];
            j++;
        }
        else
        {
            sum3 -= h3[k];
            k++;
        }
    }

    return sum1;
}

int main()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    int h1[n1], h2[n2], h3[n3];

    for (int i = 0; i < n1; i++)
        scanf("%d", &h1[i]);

    for (int i = 0; i < n2; i++)
        scanf("%d", &h2[i]);

    for (int i = 0; i < n3; i++)
        scanf("%d", &h3[i]);

    printf("%d\n", equalStacks(n1, h1, n2, h2, n3, h3));

    return 0;
}
