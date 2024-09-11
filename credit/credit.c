#include <stdio.h>
#include <cs50.h>

// Function to calculate the length of the given number
int get_length(long number)
{
    int length = 0;
    long temp = number;
    while(temp != 0)
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
        if (var == true)
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

    // Check if total sum ends in 0
    return (total % 10 == 0);
}

int main(void)
{
    int length;
    long number;

    do
    {
        number = get_long("What is the credit card number: ");

        // Use the function to calculate the length of the card number
        length = get_length(number);

    } while (length != 13 && length != 15 && length != 16);

    printf("The number of digits are: %d\n", length);

    // Check if the card number is valid using the checksum function
    if (check_sum(number))
    {
        printf("The card number is valid!\n");
    }
    else
    {
        printf("The card number is invalid!\n");
    }
}
