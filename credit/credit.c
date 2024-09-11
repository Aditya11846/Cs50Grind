#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int card;
    card = get_long("Enter your card number: \n");

    long length_counter;
    int r;
    int q;


    for(length_counter = 0;length_counter> card ;length_counter++)
    {
        for(r=0; r > 0 ; r++)
    {
        q = card/10 ;
        r = card%10;

    }

    }
     printf("%ld" , length_counter);



}
