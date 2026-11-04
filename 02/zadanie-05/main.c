#include <stdio.h>

int main(){
    char symbol;
    printf("Czyje uprawnienia chcesz zobaczyc?\n(P - poddany, G - giermek, R - rycerz, M - mag, K - krolowa)\nWybierz klase spoleczna: ");
    scanf(" %c", &symbol);
    switch(symbol){
        case 'P': printf("Poddany moze: \n");break;
        case 'G': printf("Giermek moze: \n");break;
        case 'R': printf("Rycerz moze: \n");break;
        case 'M': printf("Mag moze: \n");break;
        case 'K': printf("Krolowa moze: \n");break;
        default: printf("Zly symbol!\n");break;
    }
    switch(symbol){
        case 'K': printf("-Rozkazywac Krolowi\n");
        case 'M': printf("-Rozmawiac z krolem\n");
        case 'R': printf("-Wchodzic do zamku codziennie oraz rekrutowac giermkow\n");
        case 'G': printf("-Wchodzic na dziedziniec zamkowy codziennie\n");
        case 'P': printf("-Czcic Krola\n");break;
        default: printf("Zly symbol!\n");break;
    }
    return 0;
}
