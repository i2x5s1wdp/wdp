#include <stdio.h>

int str_len(char[]);

int main()
{
   char a[] = "abcd";
   printf("%d", str_len(a));

   getchar();
   return 0;
}

/**
 * Pobieranie d�ugo�ci �a�cucha - zwraca d�ugo�� bez '\0'
 */
int str_len(char str[]) {
	int count = 0;
	while(str[count] != '\0')
		count++;
	return count;
}
