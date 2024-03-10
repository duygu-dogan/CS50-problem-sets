#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int get_score(string letter);
int main(void)
{
    string answer1 = get_string("Player 1: ");
    string answer2 = get_string("Player 2: ");

    int score1 = get_score(answer1);
    int score2 = get_score(answer2);

    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }else if(score1 < score2)
    {
        printf("Player 2 wins!\n");
    }else
    {
         printf("Tie!\n");
    }
}
int get_score(string letter)
{
    int sum = 0;
    for(int i = 0, len = strlen(letter); i < len; i++)
    {
        if(isupper(letter[i]))
        {
            sum += points[letter[i] - 'A'];
        }else if(islower(letter[i]))
        {
            sum += points[letter[i] - 'a'];
        }
    }
    return sum;
}
