#include <stdio.h>

    int main(){
        int x, n, i, suma;
        suma = 0;
        printf("Podaj ilosc liczb (liczbe n): ");
        scanf("%d", &n);
        if(n<=0){
            printf("N musi byc wieksze od 0");
            return 0;
        }
        for(i=1; i<=n; i++){
            printf("Podaj %d liczbe: ", i);
            scanf("%d", &x);
            suma+=x;
        }
        printf("Suma podanych liczb: %d\n", suma);
        printf("Srednia podanych liczb: %.2f", (float)suma/n);
        return 0;
    }
