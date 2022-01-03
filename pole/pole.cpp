#include <stdio.h>
#define POCET 10

int main(void) {

	int cisla[] = { 3, 8, 26, 44 };

	//pole ma velikost 4 prvky,tj. index 0 až 3
	for (int i = 0; i < sizeof(cisla) / sizeof(int); i++) {
		printf("index: %d,  hodnota: %d\n", i, cisla[i]);
	}
	printf("\n");
	//nahodna cisla + omezení do 100

	int nahodna[POCET];
	long int soucet = 0; //kdyz pricitame na zacatku je 0
	int min = 2147483647, max = 0;
	srand(time(0));
	for (int i = 0; i < POCET; i++) {
		nahodna[i] = rand() % 101;
		printf("%d, ", nahodna[i]);
		soucet += nahodna[i];
		if (nahodna[i] < min) min = nahodna[i]; //if plati jen pro jeden prikaz za zavorkou
		if (nahodna[i] > max) max = nahodna[i];
	}
	printf("\n");
	printf("soucet: %d, prumer: %f\n", soucet, (float)soucet / POCET);
	printf("min: %d, max: %d", min, max);
	printf("\n");
	printf("\n");
	for (int i = POCET - 1; i >= 0; i--) {
		printf("%d ,", nahodna[i]);
	}
	printf("\n");
}