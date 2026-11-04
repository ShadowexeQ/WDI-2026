#include <stdio.h>

int potega(int liczba, int wykladnik){
    if(wykladnik==0) 
        return 1;
    return liczba*potega(liczba, wykladnik-1);
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
