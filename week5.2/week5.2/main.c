#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int j;
    int k;
    
    if(i<0){
        printf("fu ");
        j=-i;
        k=-i;
    }else{
        j=i;
        k=i;
    }
    
    int mask=1;
    while(j>9){
        j/=10;
        mask*=10;
    }
    do{
        int d=k/mask;
        switch(d){
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
            case 0:
                printf("ling");
                break;
        }
        if ( mask > 9 ) {
            printf(" ");
        }
        k %= mask;
        mask /= 10;
    }while ( mask > 0 );
    return 0;
}
