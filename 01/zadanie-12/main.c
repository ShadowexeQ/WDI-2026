#include <stdio.h>

int main(){
    int x;
    int suma = 0;
    int i;
    printf("Podaj liczbe: ");
    scanf("%d", &x);
    for(i=1; i<x; i++){
        suma+=i;
    }
    printf("Suma wszystkich liczb naturalnych mniejszych od liczby %d wynosi: %d", x, suma);
    return 0;
}
