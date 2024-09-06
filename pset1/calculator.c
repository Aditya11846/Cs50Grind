# include<stdio.h>
# include<cs50.h>

int main(void)
{
    float x = get_float("value of x: ");
    float y = get_float("value of y: ");

    printf("%f\n", x/y);
}
