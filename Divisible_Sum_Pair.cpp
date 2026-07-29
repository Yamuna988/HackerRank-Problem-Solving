#include<stdio.h>

int divisiblesumpair(int n, int k, int a[])
{
    int count = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if((a[i] + a[j]) % k == 0)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d", divisiblesumpair(n, k, a));

    return 0;
}
