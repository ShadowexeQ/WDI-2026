#include <stdio.h>

int main(){
    float liczba;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &liczba);
    printf("%.1f\n", liczba);
    printf("%.3f\n", liczba);
    printf("%.5f", liczba);
    return 0;
}
