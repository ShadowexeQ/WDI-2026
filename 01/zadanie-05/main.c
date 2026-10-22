#include <stdio.h>

int main(){
    int suma = 0;
    int temp;
    for(int i = 1; i<=5; i++){
        printf("Podaj %d liczbe: ", i);
        scanf("%d", &temp);
        suma = suma + temp;
    }
    float srednia = (float)suma/5;
    printf("Srednia z tych 5 ocen to: %f", srednia);
    return 0;
}
