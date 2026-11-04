#include <stdio.h>

int potega(int liczba, int wykladnik){
    int i, wynik;
    wynik = 1;
    if(wykladnik==0) 
        return 1;
    for(i=0; i<wykladnik; i++)
        wynik*=liczba;
    return wynik;
}

int main(){
    int wykladnik, liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("Podaj wykladnik: ");
    scanf("%d", &wykladnik);
    printf("Wynik: %d", potega(liczba, wykladnik));
    return 0;
}
