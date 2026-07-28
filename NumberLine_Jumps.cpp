#include<stdio.h>
char* kangaroo(int x1,int v1,int x2,int v2)
{
    while(x1 <= x2)
    {
        if(x1 == x2)
        return "YES";
        x1 = x1 + v1;
        x2 = x2 + v2;
    }
    return "NO";
}
int main()
{
    int x1,v1,x2,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    printf("%s",kangaroo(x1,v1,x2,v2));
    return 0;
}

