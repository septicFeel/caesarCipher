#include <stdio.h>
#include <string.h>
int main(){

	int cheie;
	char a[256];
	long i = 0;


	printf("sirul care trebuie criptat este: \n");
		scanf("%s", a);

	printf("sirul este: %s\n", a);

	printf("introduceti cheia de criptare: \n");
		scanf("%d", &cheie);

	for ( i = 0; i < strlen(a); i++ ){

		if( a[i] >= 'a' && a[i] <= 'z') {

			a[i] += cheie;

			if( a[i] > 'z') a[i] += a[i] - 'z' + 'a' - 1;
		}
		else if( a[i] >= 'A' && a[i] <= 'Z') {

			a[i] += cheie;

			if( a[i] > 'Z') a[i] += a[i] - 'Z' + 'A' - 1;
		}
	}


	printf("sirul criptat este: %s", a);

	return 0;

}
