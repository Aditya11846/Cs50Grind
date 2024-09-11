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

bool check_sum(long number)
{
    int total = 0;
    while()
    {
        total += number%10;
        number/= 
    }
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

    } while(length != 13 && length != 15 && length != 16);

    printf("The number of digits are: %d\n", length);

}
