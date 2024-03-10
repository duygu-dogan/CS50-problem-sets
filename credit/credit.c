#include <stdio.h>
#include <cs50.h>
#include <math.h>
void getCard(int cardArr[], int card_size);
int main(void)
{
    long creditCard;
    int size_of_card;
    creditCard = get_long("Number: ");
    size_of_card = floor(log10(creditCard)) + 1;

    int cardArr[size_of_card];
    for (int i = size_of_card - 1; i >= 0; i--)
    {
        cardArr[i] = creditCard % 10;
        creditCard /= 10;
    }
    getCard(cardArr, size_of_card);
}

void getCard(int cardArr[], int card_size)
{
    int sum = 0;

    for(int i = card_size - 1; i >=1; i -= 2)
    {
        int digit = cardArr[i - 1] * 2;
        sum += digit % 10 + digit / 10;
    }

    for(int i = card_size - 1; i >= 0; i -=2)
    {
        sum += cardArr[i];
    }
    if (sum % 10 == 0)
    {
        if (card_size == 15 && (cardArr[0] == 3 && (cardArr[1] == 4 || cardArr[1] == 7)))
        {
            printf("AMEX\n");
        }
        else if ((card_size == 13 || card_size == 16) && cardArr[0] == 4)
        {
            printf("VISA\n");
        }
        else if (card_size == 16 && cardArr[0] == 5 && cardArr[1]<=5)
        {
            printf("MASTERCARD\n");
        }else
        {
            printf("INVALID\n");
        }

    }else
        {
            printf("INVALID\n");
        }
}
