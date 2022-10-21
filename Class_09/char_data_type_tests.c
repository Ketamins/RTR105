#include<stdio.h>

int main ()
 {
 char a; //mainīgā ar indentifikatoru (vai vārdu) "a" deklarēšana
	 //ar indentifikatoru a viennozīmīgi tiek sasaitīts kāds
	 //atmiņas apgabals - vieta (kur) un izmēŗs (cik)
	 //uz jautājumu detalizēti kur? (adrese) atbildēsim citā nodarbībā
	 //cik? - 1 baitu, jo ... char
	 //komentārs par vārdu (vai identifikatoru) - drīkst saturēt
	 //burtus (ir starpība starp lieliem un maziem burtiem - a nav A - casesensitive)
	 //ciparus, bet nedrīkst sākties ar ciparu
	 //var būt mnemonisks, piemēram - cilindra tilpums
 printf("a mainigā vērtība (kā simbols) uzreiz pēc deklarēšanas: %c\n",a);
 printf("a mainigā vērtība (kā dec skaitlis) uzreiz pēc deklarēšanas: %d%c",a,10);
 printf("a mainigā vērtība (kā hex skaitlis) uzreiz pēc deklarēšanas: %#x\n",a);
 printf("a mainigā vērtība (kā oct skaitlis) uzreiz pēc deklarēšanas; %#o\n",a);

 return 0;
 }
