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

    long temp_check = number;
    int digit_count = 0;
    int sum = 0;
    bool double_digit = false;

    while(temp_check>0)
    {
        int digit = temp_check%10;

        if(double_digit == true)
        {
            digit *= 2;

            if(digit>9)
            {
                sum += (digit/10) + (digit%10);
            }

            else
            {
                sum+= digit
            }

            
        }
    }

