#include <stdio.h>

int main()
{
    char skaitlis;
    int i;

    printf("Ievadi vienu naturalu skaitli: ");
    if (scanf(" %c", &skaitlis) != 1 || skaitlis < '0' || skaitlis > '9') {
        printf("Ievada kluda, ievadi tikai naturalu skaitli");
        return 1;
    }

    for(i=7; i>=0; i--)
    {
        printf("%d", (unsigned char)(skaitlis>>i) & 1);
    }

    printf("\n");

    return 0;
}

//izmantojot char data type, nevar ievadit lielus skaitlus
//jo tas spej uzglabat tikai vienu simbolu
//lielakiem skaitliem butu jaizmanto int
