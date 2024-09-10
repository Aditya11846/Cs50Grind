#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int change;

    change = get_int("What is the Change: ");

    int q1 = change/25;
    int q2 = change/10;
    int q3 = change/5;
    int q4 = change/1;
    int small = 0;

    if(change%q1 == 0 || change%q2 == 0 || change%q3 == 0  )
    {

    if(q1<q2)
    {
        small = q1;

    }
    else
    {
        small = q2;
    }
    if(q1<q3)
    {
        small = q1;
    }
    else
    {
        small = q3;
    }
    if(q1<q4)
    {
        small = q1;
    }
    else
    {
        small = q4;
    }


    printf("%d\n",small);
    }
    else
    {
        printf("Sorry change not available");
    }

}
