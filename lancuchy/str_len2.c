#include <stdio.h>

int str_len(char*);

int main()
{
	char *a = "abcd";
	printf("%d", str_len(a));

	getchar();
	return 0;
}

/**
 * Krotsze pobieranie dlugosci lancucha
 */
int str_len(char *str) {
	int count = 0;
	while(*(str + count++))
		;	// lub while(*(str + count) != '\0') count++; return count;
	return count - 1;
}
