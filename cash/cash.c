#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int change;
    change = get_int("What is the change ? ");

    int quarters = change/25;
    change = change%25;

    int dime = change/10;
    change = change%10;

    int nickel = change/5;
    change = change%5;

    int penny = change/5;
    change= penny%5;

    int final_change = quarters + dime + nickel + penny;
    printf("%d\n", final_change);
}
