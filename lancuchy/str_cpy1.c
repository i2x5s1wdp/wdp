#include <stdio.h>

void str_cpy(const char[], char[]);

int main()
{
	char a[5] = "abcd";
	char b[5];
	str_cpy(a,b);

	printf("%s", b);

	getchar();
	return 0;
}

/**
 * Kopiowanie zmiennej FROM[] do pustej zmiennej TO[]
 *
 * Wady:
 *		- w mainie trzeba ustalac rozmiar stringa
 *		- trzeba wpisywac go dwa razy, w obu zmiennych
 */
void str_cpy(const char from[], char to[]) {
	int i;
	if(sizeof(from) <= sizeof(to))
	{
		for(i = 0; i <= sizeof(from); i++)
			to[i] = from[i];
	}
	else printf("Zbyt krotki drugi parametr");
}
