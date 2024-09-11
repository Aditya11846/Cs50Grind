#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int length;
    long number;

    do
    {
        number = get_long("What is the credit card number: ");

        // Checking the length of the given card number
        long temp = number;
        length = 0;
        while(temp != 0)
        {
            temp = temp / 10;
            length++;
        }
    }

    while(length != 13 && length != 15 && length != 16);
    printf("The number of digits are: %d\n", length);
}
