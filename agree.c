# include <stdio.h>
# include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree ? ");

    if (c == 'y')
    {
        printf("Great");
    }

    else
    {
        printf("Damn thats crazy");
    }
}
