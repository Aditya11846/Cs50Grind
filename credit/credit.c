#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Enter the number\n");

    long temp_number = number;
    int length_count = 0;

    while(temp_number != 0)
    {
        temp_number = number/10;
        length_count++;
    }
    printf("%d",length_count);
}
