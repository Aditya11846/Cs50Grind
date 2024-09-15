#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long input = get_long("Please enter your number here:\n ");
    int length = 0;
    long temp = input;

    while(temp!= 0)
    {
        temp = temp/10;
        length++;
    }
    printf("%d",length);
}
