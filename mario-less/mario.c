#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter Height:");
    }
    while (height<1|| height>8 );

    for(int row = 0; row < height; row++)
    {
        for ( int hash = 0; int column = 0; column<height; column++)
        {
            if (column = hash)
            {
                printf("#");
            }

        }
        printf("\n");
    }

}
