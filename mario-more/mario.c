#include <stdio.h>
#include <cs50.h>

void firstPyramid(int n, int i);
void secPyramid(int n);
int main(void)
{
    int n;
    do
    {
        n = get_int("height: ");
    }while(n < 1 || n > 8);
    for(int i = 0; i < n; i++)
    {
        firstPyramid(n - i, i);
        secPyramid(i+1);
    }
}

void firstPyramid(int n, int i)
{
    for(int j = 0; j < n - 1; j++)
    {
        printf(" ");
    }
    for(int h = 0; h <= i; h++)
    {
        printf("#");
    }
    printf("  ");
}
void secPyramid(int n){
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
