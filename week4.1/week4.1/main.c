#include <stdio.h>
#define SIZE 256
int main(void)
{
    long n;
    int even = 0, odd = 0;
    while (scanf("%ld",&n))
    {
        if(n == -1)
            break;
        else if (n % 2)
            odd++;
        else if (n % 2 == 0)
            even++;
    }
    printf("%d %d",odd,even);
    return 0;
}
