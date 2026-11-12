#include <stdio.h>
float oblicz_srednia(const int tab[], int n){
    int i, suma;
    suma = 0;
    for(i=0; i<n; i++)
        suma+=tab[i];
    return (float)suma/n;
}
int main(){
    int tab[5];
    int i;
    float srednia;
    printf("Podaj 5 liczb (wzor podawania: 1 2 3 4 5): ");
    for(i=0; i<5; i++)
        scanf("%d", &tab[i]);
    srednia = oblicz_srednia(tab, 5);
    printf("Srednia wynosi: %.2f\n", srednia);
    printf("Liczby wieksze od sredniej: ");
    for(i=0; i<5; i++)
        if((float)tab[i]>srednia)
            printf("%d ", tab[i]);
    return 0;
}
