#include <stdio.h>

int main(void) {
    int choice;

    do {
        printf("\nMeny\n");
        printf("1. Celsius till Fahrenheit\n");
        printf("2. Jämnt eller udda\n");
        printf("3. Avsluta\n");
        printf("Välj ett alternativ: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                double celsius;
                double fahrenheit;

                printf("Ange temperatur i Celsius: ");
                scanf("%lf", &celsius);

                fahrenheit = celsius * 9.0 / 5.0 + 32.0;

                printf("%.2f Celsius = %.2f Fahrenheit\n",
                       celsius, fahrenheit);
                break;
            }

            case 2: {
                int number;

                printf("Ange ett heltal: ");
                scanf("%d", &number);

                if (number % 2 == 0) {
                    printf("%d är jämnt.\n", number);
                } else {
                    printf("%d är udda.\n", number);
                }

                break;
            }

            case 3:
                printf("Programmet avslutas.\n");
                break;

            default:
                printf("Ogiltigt val.\n");
                break;
        }

    } while (choice != 3);

    return 0;
}
