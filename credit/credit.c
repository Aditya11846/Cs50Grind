#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int length;
    long input;

    // Calculate and loop until the length is 13, 15, or 16 only
    do
    {
        input = get_long("Please enter your number here:\n ");
        long temp = input;
        length = 0;

        while (temp != 0)
        {
            temp = temp / 10;
            length++;
        }
    }
    while (length != 13 && length != 15 && length != 16);

    // Luhn's Checksum Calculation
    long luhn_input = input;
    int sum = 0;
    int digit_counter = 0;
    int digit;

    while (luhn_input > 0)
    {
        // Extract the last digit
        digit = luhn_input % 10;

        // Remove the last digit
        luhn_input /= 10;

        digit_counter++;

        // Double every second digit from the right (every odd counter from the end)
        if (digit_counter % 2 == 0)
        {
            digit *= 2;
            // If doubling the digit makes it > 9, sum the digits of the product
            if (digit > 9)
            {
                digit = (digit / 10) + (digit % 10);
            }
        }

        // Add the digit (whether doubled or not) to the total sum
        sum += digit;
    }

    // Check if the total sum is a multiple of 10
    if (sum % 10 == 0)
    {
        printf("The number is valid according to Luhn's algorithm.\n");
    }
    else
    {
        printf("The number is not valid according to Luhn's algorithm.\n");
    }

    return 0;
}
