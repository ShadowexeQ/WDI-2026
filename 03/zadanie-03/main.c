#include <stdio.h>
int ceiling(float x){
    int i = (int)x;
    if(x > (float)i)
        return i+1;
    return i;
}
int floor(float x){
    int i = (int)x;
    if(x < (float)i)
        return i-1;
    return i;
}
int round(float x){
    if(x>0)
        return (int)(x+0.5);
    else
        return (int)(x-0.5);
}
int main(){
    float x;
    int wybor;
    printf("Podaj liczbe: ");
    scanf("%f", &x);
    printf("Podaj co chcesz z nia zrobic?\n");
    printf("1. Sufit (ceiling)\n");
    printf("2. Podloga (floor)\n");
    printf("3. Zaokraglenie (round)\n");
    printf("Podaj opcje: ");
    scanf("%d", &wybor);
    switch(wybor){
        case 1: printf("Wynik: %d", ceiling(x));break;
        case 2: printf("Wynik: %d", floor(x));break;
        case 3: printf("Wynik: %d", round(x));break;
        default: printf("Zla opcja");
    }
    return 0;
}
