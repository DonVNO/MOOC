#include <stdio.h>
#include <math.h>
int a(int);
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",a(n));
}

int a(int n)
{
    int count = 1;
    int value = 0;
    int i;
    while(n > 0)
    {
        i = (n%10 % 2) != (count%2)? 0: 1;
        value += pow(2, count - 1) * i;
        count++;
        n = n / 10;
    }
    return value;
}
