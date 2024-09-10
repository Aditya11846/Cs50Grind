#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int price=0;
    int paid=0;
    int change=0;

    price = get_int("What is the Price: ");
    paid = get_int("How much are you paying: ");

    change = paid- price;

    int r1 = change%25;
    int r2 = change%10;
    int r3 = change%5;
    int r4 = change%1;

    printf("%d %d %d %d\n",r1,r2,r3,r4);

}
