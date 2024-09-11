#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int card;
    card = get_long("Enter your card number: \n");

    long card_length = 0;
    int q = card_length/10;
    int r = card_length%10;

    for(card_length = 0 ; r > 0; card_length++)
    {
        q=card/10;
        r=card%10;
    }
    printf("%ld", card_length);


}
