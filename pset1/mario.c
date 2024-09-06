#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("Size:");
    }
    while(n<1);

    {
        for(int j=0; j<n ;j++)
        {
            printf("#");
        }

        printf("\n");
    }

}
