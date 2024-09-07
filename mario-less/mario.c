# include <stdio.h>
# include <cs50.h>

int get_size(void);

int main (void)
{

}



void print_grid(int size)
{
    
}







int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while(n < 1);
    return n;
}
