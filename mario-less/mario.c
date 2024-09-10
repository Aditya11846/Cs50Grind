#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int column;
    int row;
    int space;
    int width;

    // Get height input from the user
    do
    {
        height = get_int("Enter height : ");
    }
    while (height < 1);

    // Outer loop for rows
    for (row = 0; row < height; row++)
    {
        // Inner loop for spaces
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        //inner loop for hashes
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        for (width = 0 ; width <= 1; width++ )
        {
            printf(" ");
        }


        // Print new line after each row
        printf("\n");
    }
}
