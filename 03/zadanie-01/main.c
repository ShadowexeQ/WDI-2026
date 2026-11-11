#include <stdio.h>

int fibonacci_suma(int n){
    int wyraz, temp, i, suma;
    wyraz = 1;
    temp = 1;
    if(n<0)
        return -1;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    suma = 2;
    for(i=2; i<n; i++){
        wyraz+=temp;
        temp = wyraz - temp;
        suma += wyraz;
    }
    return suma;
}
int main(){
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Wynik: %d", fibonacci_suma(n));
    return 0;
}
