#include <stdio.h>
#define ROZMIAR 10
void bubble_sort(int tab[], int n){
    int czy_posortowane;
    int i, j, temp;
    for(i=0; i< n-1; i++){
        czy_posortowane = 1;
        for(j=0; j<n - 1 - i; j++)
            if(tab[j]>tab[j+1]){
                temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
                czy_posortowane = 0;
            }
        if(czy_posortowane)
            break;
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
    bubble_sort(tab, ROZMIAR);
    printf("Po sortowaniu:\n");
    for(i=0; i<ROZMIAR; i++)
        printf("%d ", tab[i]);
    return 0;
}
