#include <stdio.h>
int main(void)
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        if(test % 10 != 0)
        {
            printf("%d",test%10);
        }
        test = test / 10;
    }
    return 0;
}
