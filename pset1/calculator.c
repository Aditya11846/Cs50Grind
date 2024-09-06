# include<stdio.h>
# include<cs50.h>

int main(void)
{
    float x = get_long("value of x: ");
    float y = get_long("value of y: ");

    printf("%f\n", x/y);
}
