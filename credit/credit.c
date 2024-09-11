#include <stdio.h>
#include <cs50.h>

// Function to calculate the length of the given number
int get_length(long number)
{
    int length = 0;
    long temp = number;
    while (temp != 0)
    {
        temp = temp / 10;
        length++;
    }
    return length;
}

// Function to check the Luhn checksum
bool check_sum(long number)
{
    int total = 0;
    bool var = true;

    while (number > 0)
    {
        if (var)
        {
            total += number % 10;
            number /= 10;
            var = false;
        }
        else
        {
            int buffer = (number % 10) * 2;
            if (buffer >= 10)
            {
                total += buffer / 10;
                total += buffer % 10;
            }
            else
            {
                total += buffer;
            }
            number /= 10;
            var = true;
        }
    }

    return (total % 10 == 0);
}

int main(void)
{
    long number = get_long("What is the credit card number: ");
    int length = get_length(number);

    // Check if the card number is valid using the checksum function
    if (!check_sum(number))
    {
        printf("INVALID\n");
        return 0;
    }

    // Determine card type
    int first_digit = number;
    while (first_digit >= 10)
    {
        first_digit /= 10;
    }

    int first_two_digits = number;
    while (first_two_digits >= 100)
    {
        first_two_digits /= 10;
    }

    if ((length == 15 && first_two_digits == 34)|| first_two_digits == 37)
    {
        printf("AMEX\n");
    }
    else if (length == 16 && first_two_digits >= 51 && first_two_digits <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && first_digit == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
