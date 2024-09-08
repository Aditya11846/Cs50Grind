# include <stdio.h>
# include <cs50.h>

int main(void)
{
    //get Size from user

    int Size = get_int("What is the Size? : ");

    //Print the grid

    for(int i= 0; i<Size; i++)
    {
        printf("#\n");
    }
}
