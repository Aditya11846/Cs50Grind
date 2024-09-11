#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int card;
    card = get_long("Enter your card number: \n");

    int card_len = 0;

    long temp =  card;

    while(temp != 0)
    {
        temp = temp/10;
        card_len++;
    }

    printf("%d\n", card_len);
}
