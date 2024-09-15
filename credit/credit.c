#include<stdio.h>
#include<cs50.h>

int main(void)
{
    do
    {

    long input = get_long("Please enter your number here:\n ");
    long temp = input;
    int length = 0;

    while(temp!= 0)
    {
        temp = temp/10;
        length++;
    }
    }
    while(length == 13 || length == 15 || length == 16 );
}
