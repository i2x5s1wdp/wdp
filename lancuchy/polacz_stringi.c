#include <stdio.h>

char *polacz(char*, char*);
int str_len(char*);

int main()
{
    char *l1 = "Ala";
    char *l2 = " ma";
    printf("%s", polacz(l1, l2));
    getchar();
    return 0;
}

/**
 * Laczenie dwoch ciagow znakow
 */
char *polacz(char *lan1, char *lan2) {
    char *wynik;
    int d1, d2, d3, i = 0, j = 0;
    
    d1 = str_len(lan1);
    d2 = str_len(lan2);    
    d3 = d1 + d2 + 1;    
    wynik = (char *)malloc(sizeof(char)*d3);
    
    while(lan1[i] != '\0') 
    {
        wynik[i] = lan1[i];
        i++;
    }
    while(lan2[j] != '\0')
    {
        wynik[i] = lan2[j];
        i++;
        j++;
    }
    wynik[i] = '\0';
        
    return wynik;
}

/**
 * Zliczanie dlugosci ciagu znakow - funkcja pomocnicza dla polacz()
 */
int str_len(char *str) {	
    int count = 0;	
    while(*(str + count++))
        ;
}
