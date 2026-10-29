#include <stdio.h>

int main(){
    int najwieksza, najmniejsza, suma, ilosc, temp;
    printf("Podaj liczbe: ");
    scanf("%d", &temp);
    najwieksza = temp;
    najmniejsza = temp;
    suma = temp;
    ilosc = 1;
    if(temp%2==0){
        while(temp%2==0){
            printf("Podaj liczbe: ");
            scanf("%d", &temp);
            if(najwieksza<temp)
                najwieksza = temp;
            if(najmniejsza>temp)
                najmniejsza = temp;
            suma+=temp;
            ilosc++;
        }
    }
    printf("Najwieksza: %d\n", najwieksza);
    printf("Najmniejsza: %d\n", najmniejsza);
    printf("Suma: %d\n", suma);
    printf("Srednia: %.2f\n", (float)suma/ilosc);
    return 0;
}
