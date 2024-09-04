# include <stdio.h>
# include <cs50.h>

int main(void){
    int x = get_int("What's x? :  ");
    int y = get_int("What's y? : ");

    if (x>y)
    {
        printf("The value of %d is greater than the value of %s",x,y);
    }
