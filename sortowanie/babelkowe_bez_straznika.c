#include <stdio.h>

void sortuj_r(int*, int);
void sortuj_m(int*, int);

int main() {
	int tab[] = {5, 1, 3, 0, 9};
	int i, size = sizeof(tab) / sizeof(tab[0]); // tak si� oblicza ilo�� element�w w tablicy

	sortuj_r(tab, size);

	for(i = 0; i < size; i++)
		printf("%d", tab[i]);

	getchar();
	return 0;
}

/**
 * Sortowanie b�belkowe - rosn�co
 */
void sortuj_r(int *tabl, int rozmiar) {
	int i, j, temp;
	for(i = 0; i < rozmiar - 1; i++)
	{
		for(j = 0; j < rozmiar - 1; j++) 
		{
			if(tabl[j] > tabl[j + 1])
			{
				temp = tabl[j];
				tabl[j] = tabl[j + 1];
				tabl[j + 1] = temp;
			}
		}
	}
}

/**
 * Sortowanie b�belkowe - malej�co
 */
void sortuj_m(int *tabl, int rozmiar) {
	int i, j, temp;
	for(i = 0; i < rozmiar - 1; i++)
	{
		for(j = 0; j < rozmiar - 1; j++) 
		{
			if(tabl[j] < tabl[j + 1]) // tu jest r�nica
			{
				temp = tabl[j];
				tabl[j] = tabl[j + 1];
				tabl[j + 1] = temp;
			}
		}
	}
}
