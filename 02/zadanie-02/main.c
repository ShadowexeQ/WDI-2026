#include <stdio.h>

int main(){
    int i, n, suma;
    suma = 0;
    printf("Podaj n z przedzialu 1-100: ");
    scanf("%d", &n);
    if(n<1 || n>100){
        printf("Zly zakres!");
        return 0;
    }
    for(i=1; i<=n; i++)
        suma+= (i*i);
    printf("Suma wynosi: %d", suma);
    return 0;
}
