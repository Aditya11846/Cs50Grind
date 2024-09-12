#include <stdio.h>
#include <cs50.h>

// Function to calculate the length of the given number
int get_length(long number)
{
    int length = 0;
    while (number > 0)
    {
        number /= 10;
        length++;
    }
    return length;
}

// Function to check the Luhn checksum
bool check_sum(long number)
{
    int total = 0;
    bool double_digit = false;

    while (number > 0)
    {
        int digit = number % 10;
        if (double_digit)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9; // Same as adding the digits of the product
            }
        }
        total += digit;
        double_digit = !double_digit;
        number /= 10;
    }

    return (total % 10 == 0);
}

int main(void)
{
    long number = get_long("Number: ");
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

    if (length == 15 && (first_two_digits == 34 || first_two_digits == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
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
