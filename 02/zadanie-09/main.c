#include <stdio.h>

unsigned long silnia(unsigned long a){
    unsigned long i, iloczyn;
    iloczyn = 1;
    for(i=1; i<=a; i++)
        iloczyn*=i;
    return iloczyn;
}
int main(){
    unsigned long x;
    printf("Podaj liczbe: ");
    scanf("%lu", &x);
    if(x<0){
        printf("Silnia musi byc wieksza lub rowna zeru!");
        return 0;
    }
    printf("Silnia liczby %lu wynosi: %lu", x, silnia(x));
    return 0;
}
