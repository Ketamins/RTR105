#include <stdio.h>
#include <limits.h>
int main() {
    double num;
    char dataType;
    long long factorial = 1;
    int i;

    printf("Ievadiet decimālu skaitli: ");
    scanf("%lf", &num);

    printf("Ievadiet datu tipu, ko izmantot (c - char, i - int, ll - long long): ");
    scanf(" %c", &dataType);

    if (dataType == 'c') {
        if (num > CHAR_MAX) {
            printf("Nevar aprēķināt faktoriālu ar char datu tipu.\n");
            return 0;
        }
        i = (char)num;
    } else if (dataType == 'i') {
        if (num > INT_MAX) {
            printf("Nevar aprēķināt faktoriālu ar int datu tipu.\n");
            return 0;
        }
        i = (int)num;
    } else if (dataType == 'l') {
        i = (long long)num;
    } else {
        printf("Ievadīts nederīgs datu tips.\n");
        return 0;
    }

    while (i > 0) {
        factorial *= i;
        i--;
    }

    printf("Faktoriāls: %lld\n", factorial);
    return 0;
}
