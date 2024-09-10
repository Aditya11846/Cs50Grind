#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int price=0;
    int paid=0;
    int change=0;

    price = get_int("What is the Price: ");
    paid = get_int("How much are you paying: ");

    change = price-paid;

    int q1 = change/25;
    int q2 = change/10;
    int q3 = change/5;
    int q4 = change/1;
    int small = 0;

    if(q1<q2)
    {
        small = q1;

    }
    else
    {
        small = q2;
    }
    if(q1<q3)
    {
        small = q1;
    }
    else
    {
        small = q3;
    }
    if(q1<q4)
    {
        small = q1;
    }
    else
    {
        small = q4;
    }

    printf("%d\n",q1);
}
