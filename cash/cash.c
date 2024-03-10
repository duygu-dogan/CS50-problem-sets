#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    int counter = 0;
    do{
        n = get_int("Change owed: ");
    }while(n < 0);

    int coins[] = {25, 10, 5, 1};
    for(int i = 0; i < sizeof(coins)/ sizeof(coins[0]); i++)
    {
        counter += n / coins[i];
        n = n % coins[i];
    }

    printf("%i\n", counter);
}
