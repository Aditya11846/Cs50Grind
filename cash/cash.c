#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int price=0;
    int paid=0;
    int change=0;

    price = get_int("What is the Price: ");
    change = paid- price;

    int r1 = change%25;
    int r2 = change%10;
    int r3 = change%5;
    int r4 = change%1;

    if(r1<r2);
    {
        
    }
}
