#include <stdio.h>
int suma_cyfr(int liczba){
    if(liczba/10==0)
        return liczba%10;
    return liczba%10 + suma_cyfr(liczba/10);
}
int main(){
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("Wynik: %d", suma_cyfr(liczba));
    return 0;
}
