#include <stdio.h>

void str_cpy(char*, char*);
int str_len(char[]);

int main()
{
	char a[] = "abcd";
	char *b;
	b = (char *)malloc(str_len(a) + 1); // przypisanie rozmiaru zmiennej a do zmiennej b, ¿eby
					// nie trzeba by³o liczyæ rozmiaru zmiennej a i wpisywaæ go: *b zamiast b[5].
	str_cpy(a,b);

	printf("%s", b);

	getchar();
	return 0;
}

/**
 * Kopiowanie ³añcucha znaków
 */
void str_cpy(char *from, char *to) {
	while(*to++=*from++)
		;
}

/**
 * Pobieranie d³ugoœci ³añcucha, bez '\0'
 */
int str_len(char str[]) {
	int count = 0;
	while(str[count] != '\0')
		count++;
	return count;
}
