#include <stdio.h>

int main(){
    char inicjal;
    int wiek;
    printf("Podaj pierwsza litere imienia: ");
    scanf("%c", &inicjal);
    printf("Podaj swoj wiek: ");
    scanf("%d", &wiek);
    printf("Inicjal: %c, wiek: %d", inicjal, wiek);
    return 0;
}
