#include <stdio.h>

int main(){
    int liczba1, liczba2, liczba3;
    int suma, roznica, iloczyn;
    float iloraz;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &liczba3);
    suma = liczba1 + liczba2 + liczba3;
    roznica = liczba1 - liczba2;
    iloczyn = liczba1* liczba3;
    iloraz = (float)liczba3 / liczba2;
    printf("Suma trzech liczb: %d\n", suma);
    printf("Roznica pierwszych dwoch: %d\n", roznica);
    printf("Iloczyn pierwszej i trzeciej: %d\n", iloczyn);
    printf("Iloraz trzeciej i drugiej: %f", iloraz);
    return 0;
}
