#include <stdio.h>

void sortuj_r(int*, int);
void sortuj_m(int*, int);

void sortuj(int*, int, char);

int main() 
{
	int tab[] = {5, 1, 3, 0, 9};
	int i, size = sizeof(tab) / sizeof(tab[0]); // obliczanie ilosci elementow w tablicy

	sortuj(tab, size, 'r');

	for(i = 0; i < size; i++)
		printf("%d", tab[i]);

	getchar();
	return 0;
}

/**
 * Sortowanie babelkowe - rosnaco
 */
void sortuj_r(int *tabl, int rozmiar) 
{
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
 * Sortowanie babelkowe - malejaco
 */
void sortuj_m(int *tabl, int rozmiar) 
{
    int i, j, temp;
    for(i = 0; i < rozmiar - 1; i++)
	{
		for(j = 0; j < rozmiar - 1; j++) 
		{
			if(tabl[j] < tabl[j + 1]) // tu jest ró¿nica
			{
				temp = tabl[j];
				tabl[j] = tabl[j + 1];
				tabl[j + 1] = temp;
			}
		}
	}
}

/**
 * Sortowanie babelkowe - rosnaco lub malejaco, zaleznie od trzeciego parametru, czyli:
 *
 * sortuj(tab, size, 'r') - sortuje rosn¹co
 * sortuj(tab, size, 'm') - sortuje malej¹co
 */
void sortuj(int *tabl, int rozmiar, char flaga) 
{
	int i, j, temp;
	for(i = 0; i < rozmiar - 1; i++)
	{
		for(j = 0; j < rozmiar - 1; j++)
		{
			if( (flaga == 'r') ? (tabl[j] > tabl[j + 1]) : (tabl[j] < tabl[j + 1]) ) // operator trójargumentowy ( .. ? .. : .. )
			{
				temp = tabl[j];
				tabl[j] = tabl[j + 1];
				tabl[j + 1] = temp;
			}
		}
	}
}
