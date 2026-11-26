#include <stdio.h>
int czy_lustrzane(const char *liczba1, const char *liczba2){
    int i, j;
    i = 0;
    j = 0;
    while(liczba1[i]!='\0')
        i++;
    while(liczba2[j]!='\0')
        j++;
    if(j!=i)
        return 0;
    i=0;
    j--;
    while(liczba1[i]!='\0')
        if(liczba1[i++] != liczba2[j--])
            return 0;
        return 1;
}
int main(){
    char liczba1[100], liczba2[100];
    printf("Podaj pierwsza liczbe: ");
    scanf("%99s", liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%99s", liczba2);
    if(czy_lustrzane(liczba1, liczba2))
        printf("Liczby sa lustrzane");
    else
        printf("Liczby nie sa lustrzane");
    return 0;
}
