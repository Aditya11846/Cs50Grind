#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int length;
    do
    {

    long number = get_long("What is the credit card number: ");

    //Checking the length of the given card number//

    long temp = number;
    int length = 0;
    while(temp!=0)
    {
        temp = temp/10;
        length++;
    }
    printf("The number of digits are: %d\n", length);
    }
    while(length!=13||length!=15||length!=16);
}
