#include <stdio.h>

int main()
{
    long long int skaitlis1, skaitlis2, rezultats;

    printf("Ievadi pirmo skaitli: ");
    scanf("%lld", &skaitlis1);

    printf("Ievadi otro skaitli: ");
    scanf("%lld", &skaitlis2);

    rezultats = skaitlis1 * skaitlis2;

    printf("Reizināšanas rezultāts: %lld\n", rezultats);

    return 0;
}


