#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // char c1 = 'H';
    // char c2 = 'I';
    // char c3 = '!';

    // printf("%c%c%c\n", c1, c2, c3);
    //printf("%i %i %i\n", c1, c2, c3); => 73, 72, 33

    // string s = "HI!";
    // string t = "BYE!";
    // printf("%s\n", s);
    // printf("%s\n", t);

    string words[2]; //two dimensional array

    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%s %s\n", words[0], words[1]); 
}
