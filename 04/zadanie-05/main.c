#include <stdio.h>
int czy_calkowita(char *ciag){
    int i;
    i=0;
    if(ciag[0] == '-' && ciag[1]!='\0')
        i=1;
    while(ciag[i]!='\0')
        if(!(ciag[i] >='0' && ciag[i] <= '9'))
            return 0;
        else
            i++;
    return 1;
}
int konwertuj_na_int(char *ciag){
    int i, znak, wynik;
    wynik=0;
    i=0;
    znak=1;
    if(ciag[0] == '-'){
        znak = -1;
        i=1;
    }
    while(ciag[i]!='\0'){
        wynik = wynik*10 + ciag[i]-'0';
        i++;
    }
    return wynik*znak;
}
int main(){
    int liczba;
    char ciag[100];
    printf("Podaj ciag do przekonwertowania na int: ");
    scanf("%99s", ciag);
    if(czy_calkowita(ciag))
        liczba = konwertuj_na_int(ciag);
    else{
        printf("To nie jest liczba calkowita!");
        return 0;
    }
    printf("Wynik: %d", liczba);

    return 0;
}
