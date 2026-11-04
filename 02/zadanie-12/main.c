#include <stdio.h>
int dodawanie_n(){
    int n, temp, i, suma;
    suma = 0;
    printf("Podaj ile liczb: ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Podaj liczbe: ");
        scanf("%d", &temp);
        suma+=temp; 
    }
    return suma;
}
int odejmowanie(int liczba){
        int temp;
        do{
            printf("Podaj liczbe: ");
            scanf("%d", &temp);
            liczba -=temp;
        }while(temp != 0);
        return liczba;
}
int mnozenie(){
    int a,b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    return a*b;
}
void dzielenie(){
    int a,b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    if(b!=0)
        printf("Wynik: %.2f\n", (float)a/b);
    else
        printf("Nie dziel przez zero!\n");
}
int potega(int liczba, int wykladnik){
    if(wykladnik==0) 
        return 1;
    return liczba*potega(liczba, wykladnik-1);
}
int kwadrat(){
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    return a*a;
}
int silnia(){
    int i, iloczyn, a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    if(a<0){
        printf("Silnia musi byc wieksza lub rowna zeru!\n");
        return 0;
    }
    iloczyn = 1;
    for(i=1; i<=a; i++)
        iloczyn*=i;
    return iloczyn;
}
int main(){
    int liczba, numer, wykladnik;
    while(1){
        printf("\n1. dodawanie n liczb\n");
        printf("2. odejmowanie od liczby az do momentu podania '0'\n");
        printf("3. mnozenie dwoch liczb\n");
        printf("4. dzielenie liczby\n");
        printf("5. potegowanie\n");
        printf("6. kwadrat liczby\n");
        printf("7. silnia\n");
        printf("8. wyjdz\n");
        printf("Podaj numer: ");
        scanf("%d", &numer);
        switch(numer){
            case 1: printf("Wynik: %d\n", dodawanie_n());break;
            case 2: printf("Podaj liczbe od ktorej bedziemy odejmowac: ");
                    scanf("%d", &liczba);
                    printf("Wynik: %d\n", odejmowanie(liczba));break;
            case 3: printf("Wynik: %d\n", mnozenie());break;
            case 4: dzielenie();break;
            case 5: printf("Podaj liczbe: ");
                    scanf("%d", &liczba);
                    printf("Podaj wykladnik: ");
                    scanf("%d", &wykladnik);
                    printf("Wynik: %d\n", potega(liczba, wykladnik));break;
            case 6: printf("Wynik: %d\n", kwadrat());break;
            case 7: printf("Wynik: %d\n", silnia());break;
            case 8: return 0;
            default: printf("Niepoprawny numer!\n");break;
        }
    }
    return 0;
}
