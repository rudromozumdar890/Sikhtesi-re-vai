#include<stdio.h>
int main()
{
    int num[20], count[10], i, j;

    for (i=0; i<20; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i=0; i<10; i++)
    {
        count[i]=0;
        for (j=0; j<20; j++)
        {
            if(i==num[j])
            {
                count[i]++;
            }
        }
    }

    for (i=0; i<10; i++)
    {
        printf("%d: %d\n", i, count[i]);
    }
    return 0;
}
