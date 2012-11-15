#include <stdio.h>

int zlicz_bez(int*, int);
int zlicz_z(int*, int);

int main() {
	int tab[] = {1, 2, 3, 4, 5};
	int temp = *tab; // zaraz bedzie potrzebne
	int i, size = sizeof(tab) / sizeof(tab[0]);

	printf("%s", "Ilosc przejsc wewnetrznej funkcji bez straznika: ");
	printf("%d", zlicz_bez(tab, size)); // teraz tablica jest posortowana, trzeba przywrocic ja
									    // do poprzedniego stanu i posortowac znowu, ze straznikiem:

	*tab = temp;

	printf("%s", "\n\nIlosc przejsc wewnetrznej funkcji ze straznikiem: ");
	printf("%d", zlicz_z(tab, size));

	getchar();
	return 0;
}

/**
 * Sortowanie babelkowe rosnaco bez straznika - zwraca ilosc sprawdzen 
 * dwoch kolejnych elementow
 */
int zlicz_bez(int *tabl, int rozmiar) {
	int i, j, temp, count = 0;
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
			count++;
		}
	}
	return count;
}

/**
 * Sortowanie babelkowe rosnaco ze straznikiem - zwraca ilosc sprawdzen 
 * dwoch kolejnych elementow
 */
int zlicz_z(int *tabl, int rozmiar) {
	int i, j, temp, st = 1, count = 0;
	for(i = 0; (i < rozmiar - 1) && (st == 1); i++)
	{
		st = 0;
		for(j = 0; j < rozmiar - 1; j++)
		{
			if(tabl[j] > tabl[j + 1]) // tu jest ró¿nica
			{
				temp = tabl[j];
				tabl[j] = tabl[j + 1];
				tabl[j + 1] = temp;
				st = 1;
			}
			count++;
		}
	}
   return count;
}
