#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int secret = rand() %100 + 1;
    int guess;
    do {
        printf("Guess a number");
        printf("write number:");
        scanf("%d",&guess);
        if (guess < secret)
            printf("So small!");
        else if (guess > secret)
            printf("So big!");
            else
            printf("You guest");

    } while (guess !=secret);
    getchar();
    return 0;
}
