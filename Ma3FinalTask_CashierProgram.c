#include<stdio.h>
int main ()
{
    int order, price, payment, change;
    printf("Please select your order:\n");
    printf("[1] Fried Chicken (35 php)\n");
    printf("[2] Pork Chop (45 php)\n");
    printf("[3] Beef Steak (65 php)\n");
    printf("Choice: ");
    scanf("%d", &order);

    switch(order) {
        case 1:
            price = 35;
            printf("Input payment: ");
            scanf("%d", &payment);
            if (payment>=price) {
                printf("You have purchased Fried Chicken \n");
                change = payment - price;
                printf("Change: %d", change);
            } else {
                printf("You don't have enough funds!");
                }
            break;

        case 2:
            price = 45;
            printf("Input payment: ");
            scanf("%d", &payment);
            if (payment>=price) {
                printf("You have purchased Pork Chop \n");
                change = payment - price;
                printf("Change: %d", change);
            } else {
                printf("You don't have enough funds!");
                }
            break;

        case 3:
            price = 65;
            printf("Input payment: ");
            scanf("%d", &payment);
            if (payment>=price) {
                printf("You have purchased Beef Steak \n");
                change = payment - price;
                printf("Change: %d", change);
            } else {
                printf("You don't have enough funds!");
                }
            break;

        default:
            printf("Invalid input!");
    }
    return 0;
}
