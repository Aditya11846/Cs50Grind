#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long number = get_long("Please enter your card number ");

    //Length calculator//
    int temp = number;
    int length = 0;

    while(temp!= 0)
    {
        temp /= 10;
        length++;
    }
    printf("This is a %d digit number \n" , length);


    //Luhn's algorithm Checksum//

    int temp_check = number;
    ind digit_count = 0;
    int sum = 0;

    temp_check

}

