#include <stdio.h>
#include <string.h>
int main()
{
    int num1, num2, num3;
    char seciba[10];

    printf("Ievadi pirmo skaitli: ");
    scanf("%d", &num1);

    printf("Ievadi otro skaitli: ");
    scanf("%d", &num2);

    printf("Ievadi treso skaitli: ");
    scanf("%d", &num3);

    printf("Ievadi kaadaa seciibaa velies redzet (augosa/dilstosa): ");
    scanf("%s", seciba);

    if(strcmp(seciba, "augosa") == 0) {
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        printf("Augosa seciba: %d, %d, %d\n", num1, num2, num3);
    } else if(strcmp(seciba, "dilstosa") == 0) {
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 < num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
	printf("Dilstosa seciba: %d, %d, %d\n", num1, num2, num3);
	}
  return 0;
}
