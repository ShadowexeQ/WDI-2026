#include <stdio.h>

int main(){
    int suma = 0;
    int ocena;
    int i;
    int ndst = 0;
    for(i = 1; i<=5; i++){
        printf("Podaj %d ocene: ", i);
        scanf("%d", &ocena);
        suma+= ocena;
        if(ocena == 1){
            ndst+=1;
        }
    }
    printf("Srednia: %.2f\n", suma/5.0);
    printf("Ilosc ocen niedostatecznych: %d", ndst);
    return 0;
}
