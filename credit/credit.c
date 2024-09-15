#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int length;
    long input;

    //Calculate and loop length to be 13 , 15 or 16 only//
    do
    {

    input = get_long("Please enter your number here:\n ");
    long temp = input;
    length = 0;

    while(temp!= 0)
    {
        temp = temp/10;
        length++;
    }
    }
    while(length != 13 && length != 15 && length != 16 );

    //Luhn's Checksum//
    long luhn_input = input;
    int digit_counter = 0; 

    luhn_input = luhn_input/10;
}
