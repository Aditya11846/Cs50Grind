#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Call get_size() to get the size
    int size = get_size();

    // Call print_grid() to print the grid with the size
    print_grid(size);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: "");
    }
    while(n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

