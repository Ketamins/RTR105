// 5! = 5*4*3*2*1 =  1*2*3*4*5 = 4! * 5
// 5! / 5 = 4!

// 0! = 1 // nulle ir tukša kopa []

#include<stdio.h>

int main()
 {

 int i, n, fact;
 printf("cienījamais lietotāj, lūdzu, izvadi vienu naturālu skaitli:");
 scanf("%d",&n);

 for(i = 1, fact = 1; i<=n ; i++)
 {
 fact = fact * 1; //fact *=1;
 printf("%3d! = %12d\n",i,fact);
 }



 return 0;
 }
