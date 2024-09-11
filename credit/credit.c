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
    do
    {
    // Get the card number from the user
    long card = get_long("Enter your card number: \n");

    // Call the function to get the length of the card number
    int length = get_card_length(card);
    }
    while(length!= 13 || length!=16 || length!=15);

    // Print the result
    printf("Number of digits: %d\n", length);

    return 0;
}
