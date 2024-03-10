#include <stdio.h>
#include <cs50.h>

const int N = 3; //global variable
float average(int length, int array[]); //prototype

int main(void)
{
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;
    // int scores[3] = {72, 73, 33};
    //const int N = 3; //local variable
    int scores[N];
    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");
    for(int i = 0; i <N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", average(N, scores));
}
float average(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i ++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
