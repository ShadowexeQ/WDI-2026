#include <stdio.h>
#define ROZMIAR 10
void quick_sort(int tab[], int lewy, int prawy){
    int i,j,pivot, temp;
    if(lewy<prawy){
    pivot = prawy;
    i = lewy;
    for(j=lewy; j<prawy; j++)
        if(tab[j]<tab[pivot]){
            temp = tab[j];
            tab[j] = tab[i];
            tab[i++] = temp;
        }
    temp = tab[i];
    tab[i] = tab[prawy];
    tab[prawy] = temp;

    quick_sort(tab, lewy, i-1);
    quick_sort(tab, i+1, prawy);
    }
}
int main(){
    int tab[ROZMIAR];
    int i;
    printf("Podaj %d liczb (wzor podawania: 1 2 3...): ", ROZMIAR);
    for(i=0; i<ROZMIAR; i++)
        scanf("%d", &tab[i]);
    printf("Przed sortowaniem:\n");
    for(i=0; i<ROZMIAR; i++)
        printf("%d ", tab[i]);
    printf("\n");
    quick_sort(tab, 0, ROZMIAR-1);
    printf("Po sortowaniu:\n");
    for(i=0; i<ROZMIAR; i++)
        printf("%d ", tab[i]);
    return 0;
}
