#include <stdio.h>
void sort(int);
int main(void)
{
    int max;
    scanf("%d",&max);
    if(max%2)
    {
        sort(max);
        printf("%d",max);
    }
    else
    {
        sort(max);
    }
    return 0;
}

void sort(int n)
{
    for(int i = 1; i < n; i++)
    {
        if(i%2)
            printf("%d",i);
        else
            printf(" ");
    }
}


