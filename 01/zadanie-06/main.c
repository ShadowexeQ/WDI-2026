#include <stdio.h>

int main(){
    int sekundy;
    printf("Podaj liczbe sekund: ");
    scanf("%d", &sekundy);
    if(sekundy<0){
        printf("Niepoprawna wartosc");
        return 0;
    }
    int godziny = sekundy / 3600;
    int minuty = (sekundy%3600) / 60;
    printf("%d h %d min %d s",godziny, minuty, (sekundy%3600)%60);
    return 0;
}
