#include <stdio.h>

int main(){
    int suma = 0;
    int temp;
    int i;
    float srednia;
    for(i = 1; i<=5; i++){
        printf("Podaj %d liczbe: ", i);
        scanf("%d", &temp);
        suma = suma + temp;
    }
    srednia = (float)suma/5;
    printf("Srednia z tych 5 ocen to: %f", srednia);
    return 0;
}
