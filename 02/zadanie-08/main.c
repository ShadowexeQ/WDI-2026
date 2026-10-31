#include <stdio.h>
int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
int min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}
int main(){
    int liczba1, liczba2;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);
    printf("Wieksza liczba jest: %d\n", max(liczba1, liczba2));
    printf("Mniejsza liczba jest: %d\n", min(liczba1, liczba2));
    return 0;
}
