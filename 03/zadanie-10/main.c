#include <stdio.h>
#define ROZMIAR 10
void scal(int tab[], int lewy, int srodek, int prawy){
    int pom[ROZMIAR];
    int i, j, k;
    i = lewy;
    j = srodek+1; 
    k = lewy;
    while(i<=srodek && j<=prawy){
        if(tab[i]<=tab[j])
            pom[k++] = tab[i++];
        else
            pom[k++] = tab[j++];
    }
    while(i <= srodek)
        pom[k++] = tab[i++];
    while(j <= prawy)
        pom[k++] = tab[j++];
    for(i = lewy; i<= prawy; i++)
        tab[i] = pom[i];
}
void merge_sort(int tab[], int lewy, int prawy){
    int srodek;
    if(lewy<prawy){
        srodek = (lewy+prawy)/2;
        merge_sort(tab, lewy, srodek);
        merge_sort(tab, srodek+1, prawy);
        scal(tab, lewy, srodek, prawy);
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
    merge_sort(tab, 0, ROZMIAR-1);
    printf("Po sortowaniu:\n");
    for(i=0; i<ROZMIAR; i++)
        printf("%d ", tab[i]);
    return 0;
}
