#include <stdio.h>
#define ROZMIAR 10
void dodaj(int tab[], int *ile){
    int liczba;
    if(*ile < ROZMIAR){
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        tab[(*ile)++] = liczba;
    }
    else
        printf("Pelny!\n");
}
void pobierz_lifo(int tab[], int *ile){
    if(*ile>0)
        printf("Pobrales: %d\n", tab[--(*ile)]);
    else
        printf("Pusty!\n");
}
void pobierz_fifo(int tab[], int *ile){
    int i;
    if(*ile>0){
        printf("Pobrales: %d\n", tab[0]);
        for(i = 0; i<*ile-1; i++)
            tab[i] = tab[i+1];
        (*ile)--;
    }
    else
        printf("Pusty!");
}
void wyswietl(const int tab[], int *ile){
    int i;
    for(i=0; i<*ile; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}
int main(){
    int tryb, wybor, ile;
    int tab[ROZMIAR];
    ile = 0;
    printf("Wybierz tryb 1 - FIFO czy 2 - LIFO: ");
    scanf("%d", &tryb);
    do{
        printf("1. Dodaj\n");
        printf("2. Pobierz\n");
        printf("3. Wyswietl\n");
        printf("4. Wyjdz\n");
        printf("Wybierz operacje: ");
        scanf("%d", &wybor);
        switch(wybor){
            case 1: dodaj(tab, &ile);break;
            case 2: 
            if(tryb == 1)
                pobierz_fifo(tab, &ile);
            else
                pobierz_lifo(tab, &ile);
            break;
            case 3: wyswietl(tab, &ile);break;
        }
    }while(wybor!=4);
    return 0;
}
