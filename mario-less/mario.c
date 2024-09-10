# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter height: ");
    }
    while(height < 1);
}
