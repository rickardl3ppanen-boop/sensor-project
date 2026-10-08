#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int) time(NULL));

    int secret_number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    do {
        printf("Gissa ett tal mellan 1 och 100: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secret_number) {
            printf("För lågt!\n");
        } else if (guess > secret_number) {
            printf("För högt!\n");
        } else {
            printf("Rätt!\n");
            printf("Det tog %d gissningar.\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}
