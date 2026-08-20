#include <stdio.h>
#include <math.h>

int squares(int a, int b)
{
    int x = sqrt(b);
    int y = sqrt(a - 1);

    return x - y;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", squares(a, b));
    }

    return 0;
}
