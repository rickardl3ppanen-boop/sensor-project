#include <stdio.h>

int main(void) {
    int number;
    int is_prime = 1;

    printf("Ange ett positivt heltal: ");
    scanf("%d", &number);

    if (number < 2) {
        is_prime = 0;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d är ett primtal.\n", number);
    } else {
        printf("%d är inte ett primtal.\n", number);
    }

    return 0;
}
