#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int change;
    do
    {

        change = get_int("What is the change ? ");
    }
    while(change<1);

    int quarters = change/25;
    change = change%25;

    int dime = change/10;
    change = change%10;

    int nickel = change/5;
    change = change%5;

    int penny = change/1;
    change= penny%1;

    int final_change = quarters + dime + nickel + penny;
    printf("The Number of coins needed are %d\n", final_change);
}
