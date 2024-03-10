#include <stdio.h>
#include <cs50.h>

void printRow(int n, int i);
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }while(n < 1);

    for(int i = 0; i < n; i++)
    {
        printRow(n - i, i);
    }
}

void printRow(int n, int i)
{
    for(int j = 0; j < n - 1; j++)
    {
        printf(" ");
    }
    for(int h = 0; h <= i; h++)
    {
        printf("#");
    }
    printf("\n");
}
