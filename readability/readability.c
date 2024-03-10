#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
void get_grade(string text);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    string text = get_string("Text: ");
    get_grade(text);
}

// The method that returns the number of letters
int count_letters(string text)
{
    int count_of_letters = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
            count_of_letters++;
    }
    return count_of_letters;
}
// The method that returns the number of words
int count_words(string text)
{
    int count_of_words;
    int count_of_blanks = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isblank(text[i]))
            count_of_blanks++;
        if (text[i] == '\'' && text[i + 1] != 's')
            count_of_blanks++;
    }
    count_of_words = count_of_blanks + 1;
    return count_of_words;
}
// The method that returns the number of sentences
int count_sentences(string text)
{
    int count_of_sentences = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            count_of_sentences++;
    }
    return count_of_sentences;
}
// The method that returns the level of grade
void get_grade(string text)
{

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    int L = (float) (letters * 100 / (float) words);
    int S = (float) (sentences * 100 / (float) words);
    int index = round(((0.0588 * L) - (0.296 * S)) - 15.8);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
