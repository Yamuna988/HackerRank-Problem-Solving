#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];
    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    printf("%lld", sum);

    return 0;
}

