
#include <stdio.h>
#include <stdint.h>

int main() {

	// Definiere Variable i
	// i entspricht der Bitlänge von uint16_t
	int i = 16, val;
	// Definiere Variable eingabe_nummer
	uint16_t eingabe_nummer; 

	// Gebe Text aus und frage nach Wert für eingabe_nummer
	printf("Bitte gebe eine Zahl ein: ");
	// Erhalte eingegebenen Wert von eingabe_nummer
    scanf("%hd", &eingabe_nummer);

    printf("\n");

 	// Iteriere über i bis es den Wert null hat
 	// Iteriere durch die verschiedenen Bits und gebe das Ergebnis aus
  	while(i >= 0) {

  		// Verschiebe die Binärzahl eingabe_nummer um den Wert i 
  		// Überprüfe mit "& 1" den Wert von eingabe_nummer
  		// Wenn das Ergebnis gleich zu eins ist, ist val true
  		val = ((eingabe_nummer >> i) & 1) == 1;
  		// Für den Fall das val true ist, wird die Zahl 1 als String ausgegeben
  		// Sonst wird die Zahl 0 als String ausgegeben
  		putchar( val ? '1' : '0');

  		// Reduziere i um eins für die nächste Iteration
  		i--;

  	}

  	printf("\n");

	// uint16_t num, exponent, n, r;
	// char binary_num[17];
	// exponent = 16;

 //    printf("Bitte gebe eine Zahl ein: \n");
 //    scanf("%hd", &num);

	// while(exponent >= 0) {
	   	
	//    	n = num/2(exponent);
	//    	r = num%2(exponent);

	//    	if(n > 2) {
	   	
	//    		r = r + (n - 1)*2(exponent);
	//    		n = 1;

	//    	}

	//    	binary_num[exponent - 16] = n;

	//     exponent = exponent - 1;
	// }

	// printf( "Das ist die Zahl: %hd\n", num);
	// printf( "Und das ist sie in Binärschreibweise: %s\n", binary_num);

   	return 0;

}
