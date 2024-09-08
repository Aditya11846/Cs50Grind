# include <stdio.h>
# include <cs50.h>

int main(void)
{
    //get Size from user

    int Size = get_int("What is the Size? : ");

    //Print the grid

for(int j=0; j<Size; j++)
{
    for(int i= 0; i<Size; i++)
    {
        printf("#");
    }
    printf("\n");
}

}
