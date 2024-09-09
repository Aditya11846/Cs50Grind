#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Prompt for height between 1 and 8 inclusive
    do
    {
        height = get_int("Enter Height: ");
    }
    while (height < 1 || height > 8);

    // Loop through rows
    for (int row = 0; row < height; row++)
    {
        // Print spaces for left side of the pyramid
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        // Print hashes for the pyramid
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }

        // Move to the next line after completing a row
        printf("\n");
    }
}
