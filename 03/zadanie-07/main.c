#include <stdio.h>
#define ROZMIAR 10
float oblicz_srednia(const int tab[], int n){
    int i, suma;
    suma = 0;
    for(i=0; i<n; i++)
        suma+=tab[i];
    return (float)suma/n;
}
void wieksze_od_sredniej(const int tab[], int n){
    int i;
    float srednia;
    srednia = oblicz_srednia(tab, n);
    for(i=0; i<n; i++)
        if((float)tab[i]>srednia)
            printf("%d ", tab[i]);
}
void min_max(const int tab[], int n){
    int max, min, i;
    max = tab[0];
    min = tab[0];
    for(i=1; i<n; i++){
        if(tab[i]>max)
            max = tab[i];
        if(tab[i]<min)
            min = tab[i];
    }
    printf("Najwiekszy element tablicy to: %d\n", max);
    printf("Najmniejszy element tablicy to: %d\n", min);
}
int suma_nieparzysta(const int tab[], int n){
    int i, suma;
    suma = 0;
    for(i=0; i<n; i++)
        if(tab[i]%2==1)
            suma+=tab[i];
    return suma;
}
void od_ostatniego(const int tab[], int n){
    int i;
    for(i=n-1; i>=0; i--)
        printf("%d ", tab[i]);
}
int main(){
    int tab[ROZMIAR];
    int i, wybor;
    float srednia;
    printf("Podaj %d liczb (wzor podawania: 1 2 3...): ", ROZMIAR);
    for(i=0; i<ROZMIAR; i++)
        scanf("%d", &tab[i]);
    printf("Wypisze srednia arytmetyczna:\n");
    srednia = oblicz_srednia(tab, ROZMIAR);
    printf("Srednia wynosi: %.2f\n", srednia);
    printf("Wypisze wszystkie liczby wieksze od sredniej:\n");
    printf("Liczby wieksze od sredniej: "); 
    wieksze_od_sredniej(tab, ROZMIAR);
    printf("\n");
    printf("Wypisze najmniejsza oraz najwieksza liczbe:\n");
    min_max(tab, ROZMIAR);
    printf("Sumuje wszystkie elementy nieparzyste:\n");
    printf("Suma wszystkich elementow nieparzystych to: %d\n", suma_nieparzysta(tab, ROZMIAR));
    printf("Wypisuje tablice od ostatniego elementu:\n");
    od_ostatniego(tab, ROZMIAR);
    return 0;
}
