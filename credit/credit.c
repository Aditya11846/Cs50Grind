#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Enter the number\n");

    long temp_number = number;
    long length_count = 0;

    while(temp_number!= 0)
    {
        temp_number = temp_number/10;
        length_count++;
    }

    printf("%ld",length_count);


}
