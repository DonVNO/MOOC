#include <stdio.h>
int convert(int);
int main(void)
{
    int bjt;
    scanf("%d",&bjt);
    printf("%d",convert(bjt));
    return 0;
}

int convert(int n)
{
    int utc;
    if(n >= 800)
    {
        utc = n - 800;
    }
    else
    {
        utc = n + 1600;
    }
    return utc;
}
