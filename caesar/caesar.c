#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string text);
char rotate_char(char c, int k);
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    string plain_text = get_string("plaintext:  ");
    int len = strlen(plain_text);
    char cipher_text[len + 1];

    for (int i = 0; i <= len; i++)
    {
        cipher_text[i] = rotate_char(plain_text[i], key);
    }
    printf("ciphertext: %s\n", cipher_text);
}
// The method checks if the key contains only digits
bool only_digits(string text)
{
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (!isdigit(text[i]))
        {
            return false;
        }
    }
    return true;
}
//The method rotating the letter according to key value
char rotate_char(char c, int k)
{
    char newChar;
    if (isalpha(c) && isupper(c))
    {
        newChar = ((c - 'A') + k) % 26 + 'A';
        return newChar;
    }
    else if (isalpha(c) && islower(c))
    {
        newChar = ((c - 'a') + k) % 26 + 'a';
        return newChar;
    }
    else
        return c;
}
