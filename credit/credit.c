#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int card;
    card = get_long("Enter your card number: \n");

    long length_counter;
    int r;
    int q;

    for(r=0; r > 0 ; r++)
    {
        q = card/10 ;
        r = card%10;
    }


}
