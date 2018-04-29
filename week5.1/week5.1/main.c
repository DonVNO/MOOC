#include <stdio.h>
#include <math.h>
int main(void)
{
    int m, n, count = 2, sum = 0;
    int is_prime = 0;
    scanf("%d%d",&n,&m);
    if(n == 1)
        sum += 2;
    for (int i = 3; count <= m; i = i +2)
    {
        is_prime =1;
        
        for (int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        
        if(is_prime == 1)
        {
            if(count >= n)
            {
                sum += i;
                printf("%d\n",i);
            }
            count++;
        }
    }
    printf("%d",sum);
    return 0;
}
