// NB! for( ; ; ) - cikla for () iekavās vienmēŗ ir divi semikoli !!!!!!
// kodēšanai https://www.onlinegdb.com/onlince_c_compiler
//	     tajā skaitā pielietot "Beaatify"	

// for ( ; izteiksme ; ) viena darbība;
  //for ( ; izteiksme ; )
//viena_darbība;
// for ( ; izteiksme ; ) (pirmaa darbiiba; otraa darbiiba;)
// for ( ; izteiksme ; )
// {
// pirmaa_darbiiba;
// otraa_darbiiba;
// }

// tāpat kā iepriekš viena_darbiiba vai pirmaa_darbiiba utt
// tiks (regulāri) izpildītas ja izteiksmes rezultāts ir "true"
// "true" - 1 kaut vienā no rezultāta bitiem
// "false" - 0 visos rezultāta bitos
#include<stdio.h>

int main ()
 {
 char c = 10;

 while (c>=0)
 {
 printf("c = %d\n",c);
 //c = -7;
 c--; //c = c - 1; //c -= 1; // c += -1; // --c;
 }

 printf("izdruka ar printf air cikla.\n");
 printf ("c = %d\n",c);

 return 0;

 }
