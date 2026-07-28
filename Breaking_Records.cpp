#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    int highest = score[0];
int lowest = score[0];
int highCount = 0;
int lowCount = 0;
for(int i=1;i<n;i++)
{
    if(score[i]>highest)
    {
        highest = score[i];
        highCount++;
    }
    else if(score[i]<lowest)
    {
        lowest=score[i];
        lowCount++;
    }
}
printf("%d %d",highCount,lowCount);
return 0;
}

