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
    int digit_count = 0;
    int digit = 0 ;
    int twice = 1;
    int sum = 0;

    while()
    temp_check /= 10;
    digit = temp_check%10;
    digit_count++;

    if(digit_count%2 != 0)
    {
        digit*=2;

        if (digit>9)
        {
            int first;
            first = digit/10;
            digit%10;
            digit += first;
        }



    }
}

