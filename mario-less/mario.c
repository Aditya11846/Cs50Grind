#include <stdio.h>
#include <cs50>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter Height:");
    }
    while (height<1 || height>0);

    for(row = 0; row < height; row++)
    {
        printf("/n")
    }

}
