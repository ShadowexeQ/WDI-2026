#include <stdio.h>

int main(){
    int liczba1, liczba2;
    char znak;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);
    printf("Podaj znak dzialania (+,-,*,/,%%): ");
    scanf(" %c", &znak);
    switch(znak){
        case '+': printf("Wynik: %d", liczba1+liczba2);break;
        case '-': printf("Wynik: %d", liczba1-liczba2);break;
        case '*': printf("Wynik: %d", liczba1*liczba2);break;
        case '/': if(liczba2 != 0){
        printf("Wynik: %.2f", (float)liczba1/liczba2);
        }
        else{
            printf("Nie dziel przez zero!");
        }
        break;
        case '%': if(liczba2 != 0){ 
        printf("Wynik: %d", liczba1%liczba2);
        }
        else{
            printf("Nie dziel przez zero!");
        }
        break;
        default: printf("Niepoprawny znak!");
    }
    return 0;
}
