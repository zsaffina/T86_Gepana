#include<stdio.h>
int main()
{
    int temperature;
    printf("Enter the temperature in centigrade: ");
    scanf("%d", &temperature);
    if (temperature < 0) {
        printf("It's freezing!");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("It's very cold!");
    } else if (temperature >= 10 && temperature <= 20) {
        printf("It's cold!");
    } else if (temperature >= 20 && temperature <= 30) {
        printf("It's normal weather!");
    } else if (temperature >= 30 && temperature <= 40) {
        printf("It's hot!");
    } else if (temperature >= 40) {
        printf("It's very hot!");
    }
    return 0;
}
