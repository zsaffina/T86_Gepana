#include<stdio.h>
int main ()
{
    int n;
    printf("Input any positive integer: ");
    scanf("%d", &n);

    while(n !=1 ){
        if(n % 2 == 1){
            n = (n * 3) + 1;
            printf("The current given value is %d\n", n);
        } else {
            n = n / 2;
            printf("The current given value is %d\n", n);
        }
    }
    return 0;
}
