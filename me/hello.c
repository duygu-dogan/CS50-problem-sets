#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string user = get_string("What's your name? ");
    printf("hello, %s\n", user);
}
