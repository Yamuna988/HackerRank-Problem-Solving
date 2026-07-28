#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int d1=0,d2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        d1=d1+a[i][i];
        d2=d2+a[i][n-1-i];
    }
    printf("%d",abs(d1-d2));
    return 0;
}

