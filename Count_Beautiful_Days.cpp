#include <stdio.h>
#include <stdlib.h>

int beautifulDays(int i, int j, int k)
{
    int count = 0;

    for (int n = i; n <= j; n++)
    {
        int temp = n;
        int reverse = 0;

        // Find reverse of n
        while (temp > 0)
        {
            reverse = reverse * 10 + temp % 10;
            temp = temp / 10;
        }

        // Find absolute difference
        int difference = abs(n - reverse);

        // Check if it is beautiful
        if (difference % k == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int i, j, k;

    scanf("%d %d %d", &i, &j, &k);

    int result = beautifulDays(i, j, k);

    printf("%d\n", result);

    return 0;
}
