#include <stdio.h>
#include <cs50.h>

// Function to calculate the number of digits in a card number
int get_card_length(long card_number)
{
    int card_length = 0;
    long temp = card_number;

    // Loop to count the digits
    while (temp != 0)
    {
        temp = temp / 10;  // Remove the last digit
        card_length++;     // Increment the count
    }

    return card_length;
}

int main(void)
{
    long card;
    int length;

    // Keep asking for input until the length is 13, 15, or 16
    do
    {
        // Get the card number from the user
        card = get_long("Enter your card number: \n");

        // Call the function to get the length of the card number
        length = get_card_length(card);

        // Check if the length is not 13, 15, or 16
        if (length != 13 && length != 15 && length != 16)
        {
            printf("Invalid card length! Please enter a card number with 13, 15, or 16 digits.\n");
        }

    } while (length != 13 && length != 15 && length != 16);

    // Print the valid card number and its length
    printf("Valid card number with %d digits.\n", length);



}

int calculate_luhn_checksum(long card_number)
{
    int digit_count = 0;
    
}

