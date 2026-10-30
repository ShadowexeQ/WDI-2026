#include <stdio.h>

int main(){
    int liczba1, liczba2;
    char znak;
    int odpowiedz;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);
    printf("Podaj znak dzialania (+,-,*,/,%%): ");
    scanf(" %c", &znak);
    while(1){
        printf("Liczba1: %d\n", liczba1);
        printf("Liczba2: %d\n", liczba2);
        printf("Podany znak: %c\n", znak);
        switch(znak){
        case '+': printf("Wynik: %d\n", liczba1+liczba2);break;
        case '-': printf("Wynik: %d\n", liczba1-liczba2);break;
        case '*': printf("Wynik: %d\n", liczba1*liczba2);break;
        case '/': if(liczba2 != 0){
        printf("Wynik: %.2f\n", (float)liczba1/liczba2);
        }
        else{
            printf("Nie dziel przez zero!\n");
        }
        break;
        case '%': if(liczba2 != 0){ 
        printf("Wynik: %d\n", liczba1%liczba2);
        }
        else{
            printf("Nie dziel przez zero!\n");
        }
        break;
        default: printf("Niepoprawny znak!\n");
        }
        printf("1. Zmien pierwsza liczbe\n");
        printf("2. zmien druga liczbe\n");
        printf("3. Zmien znak\n");
        printf("4. Wyjdz\n");
        scanf("%d", &odpowiedz);
        switch (odpowiedz){
            case 1: printf("Podaj nowa liczbe1: ");
            scanf("%d", &liczba1);break;
            case 2: printf("Podaj nowa liczbe2: ");
            scanf("%d", &liczba2);break;
            case 3: printf("Podaj nowy znak: ");
            scanf(" %c", &znak);break;
            case 4: return 0;
            default: printf("Nie ma takiej opcji!");break;
        }
    }
    return 0;
}
