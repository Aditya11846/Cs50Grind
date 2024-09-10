# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int height;
    int column;
    int row;
    int space;

    // Get height input from the user with validation (1 <= height <= 8)
    do
    {
        height = get_int("Enter height : ");
    }
    while(height < 1);

    // Outer loop for rows
    for(row = 0; row < height; row++)
    {
        // Inner loop for spaces
        for (space = 0; space < height - row - 1; space++) // Fixed the extra space issue
        {
            printf(" ");
        }

        // Inner loop for hashes
        for(column = 0 ; column <= row ; column++)
        {
            printf("#");
        }

        // Print new line after each row
        printf("\n");
    }
}
