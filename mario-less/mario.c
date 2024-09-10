# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int height;
    int column;
    int row;
    int space;
    do
    {
        height = get_int("Enter height: ");
    }
    while(height < 1);

    for(row = 0; row<height; row++)
    {
        for(column = 0 ; column <= row ; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
