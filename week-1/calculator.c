#include <cs50.h>
#include <stdio.h>
// int add(int a, int b);
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    // printf("%i\n", x + y);

    // int z = add(x, y);
    // printf("%i\n", z);

    // printf("%i\n", add(x, y));

    //type casting
    float z = (float) x / (float) y;
    printf(".5%f\n", z); //.n declares how many numbers will be shown after point
}

// int add(int a, int b)
// {
//     return a + b;
// }

