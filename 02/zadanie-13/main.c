#include <stdio.h>
int fibonaci(int n){
    int suma, temp, i;
    suma = 1;
    temp = 1;
    if(n<0)
        return -1;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    for(i=2; i<n; i++){
        suma+=temp;
        temp = suma - temp;
    }
    return suma;
}
int main(){
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    printf("Wynik: %d", fibonaci(n));
    return 0;
}
