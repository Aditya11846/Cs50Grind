#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int height;
    int row;
    int column;

    do
    {
        height = get_int("Enter Height here: ");
    }
    while(height<1);

    for(row = 0; row<height; row++)
    {
        for(column = 0 ; column<=row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
