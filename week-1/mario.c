#include <stdio.h>
#include <cs50.h>
// void blocks(int n);
int main(void)
{
    //Prompt user for positive integer
    int n;
    do
    {
        n = get_int("size: ");
    }
    while(n < 1);

    //Print an n-by-n grid of bricks
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    // blocks(3);
}
// void blocks(int n)
// {
//      for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j< n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }

// }
