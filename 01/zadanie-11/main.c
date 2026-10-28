#include <stdio.h>

int main(){
    int x;
    printf("Podaj liczbe: ");
    scanf("%d", &x);
    if(x>0 && x%2==0)
        printf("Liczba %d jest jednoczesnie dodatnia i parzysta", x);
    else
        printf("Liczba %d nie jest jednoczesnie dodatnia i parzysta", x);
    return 0;
}
