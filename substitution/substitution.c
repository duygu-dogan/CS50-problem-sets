#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool check_isalpha(string text);
bool check_isunique(string text);
char get_cipher_text(char c, string key);
int main(int argc, string argv[])
{
    if (argc != 2 || !check_isalpha(argv[1]))
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else if (!check_isunique(argv[1]))
    {
        printf("Key must contain unique characters.\n");
        return 1;
    }
    string plain_text = get_string("plaintext:  ");
    int len = strlen(plain_text);
    char cipher_text[len + 1];
    for (int i = 0; i <= len; i++)
    {
        cipher_text[i] = get_cipher_text(plain_text[i], argv[1]);
    }
    cipher_text[len + 1] = '\0';
    printf("ciphertext: %s\n", cipher_text);
    return 0;
}
// the method checks whether the prompt is alphabetical
bool check_isalpha(string text)
{
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        if (!isalpha(text[i]))
            return false;
    }
    return true;
}
// the method checks whether the prompt is unique
bool check_isunique(string text)
{
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (text[i] == text[j])
                return false;
        }
    }
    return true;
}
// the method rotates chars
char get_cipher_text(char c, string key)
{
    char newChar;
    if (isupper(c))
    {
        newChar = toupper(key[c - 'A']);
        return newChar;
    }
    else if (islower(c))
    {
        newChar = tolower(key[c - 'a']);
        return newChar;
    }
    else
        return c;
}
