#include<stdio.h>
int getTotal(int a_count,int* a,int b_count,int* b)
{
    int count =  0;
    for(int x=1;x<=100;x++)
    {
        int valid = 1;
        for(int i=0;i<a_count;i++)
        {
            if(x%a[i]!=0)
            {
                valid = 0;
                break;
            }
        }
        if(valid == 1)
        {
            for(int i=0;i<b_count;i++)
            {
                if(b[i]%x!=0)
                {
                    valid = 0;
                    break;
                }
            }
        }
        if(valid == 1)
        {
            count ++;
        }
    }
    return count;
}
int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n], b[m];

    // Input first array
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input second array
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("%d", getTotal(n, a, m, b));

    return 0;
}

