#include <stdio.h>
void divide(int,int);
int main(void)
{
    int a,b;
    scanf("%d/%d",&a,&b);
    divide(a,b);
}

void divide(int a, int b)
{
    int count = 0;
    int rest = 0;
    printf("0.");
    while (count < 200)
    {
        rest = a*10/b;
        printf("%d",rest);
        if(a*10%b == 0)
            break;
        a = a*10%b;
        count++;
    }
    putchar('\n');
}
