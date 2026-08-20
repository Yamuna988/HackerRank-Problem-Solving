#include <stdio.h>

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 > y2)
    {
        return 10000;
    }
    else if (y1 == y2 && m1 > m2)
    {
        return (m1 - m2) * 500;
    }
    else if (y1 == y2 && m1 == m2 && d1 > d2)
    {
        return (d1 - d2) * 15;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;

    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);

    printf("%d\n", libraryFine(d1, m1, y1, d2, m2, y2));

    return 0;
}
