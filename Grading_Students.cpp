#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        int grade;
        scanf("%d",&grade);
        
        if(grade >= 38)
        {
            int remainder = grade % 5;
            int difference = 5 - remainder;
            
            if(remainder != 0 && difference < 3)
            {
                grade = grade + difference;
            }
        }
        
        printf("%d\n",grade);
    }
    return 0;
}

