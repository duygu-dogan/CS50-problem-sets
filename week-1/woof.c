#include <stdio.h>
void meow(int n);
int main(void)
{
    // int counter = 3;
    // while(counter > 0)
    // {
    //     printf("meow\n");
    //     counter--;
    // }

    // int i = 0;
    // while(i < 3)
    // {
    //     printf("meow\n");
    //     i++;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     meow();
    // }

    //endless loop
    // while(true)
    // {
    //     printf("meow\n");
    // }
    meow(3);
}
void meow(int n)
    {
        for(int i = 0; i < n; i++)
        {
           printf("meow\n");
        }
    }
