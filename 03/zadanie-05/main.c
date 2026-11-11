#include <stdio.h>
void wyswietl_for(const int tablica[], int n){
    int i;
    printf("Petla FOR\n");
    printf("Przod->Tyl\n");
    for(i = 0; i<n; i++)
        printf("%d ", tablica[i]);
    printf("\n");
    printf("Tyl->Przod\n");
    for(i = n-1; i>=0; i--)
        printf("%d ", tablica[i]);
    printf("\n");
}
void wyswietl_while(const int tablica[], int n){
    int i;
    printf("Petla WHILE\n");
    printf("Przod->Tyl\n");
    i=0;
    while(i<n)
        printf("%d ", tablica[i++]);
    printf("\n");
    printf("Tyl->Przod\n");
    i=n-1;
    while(i>=0)
        printf("%d ", tablica[i--]);
    printf("\n");
}
void wyswietl_do_while(const int tablica[], int n){
    int i;
    i=0;
    printf("Petla DO... WHILE\n");
    printf("Przod->Tyl\n");
    do{
        printf("%d ", tablica[i++]);
    }while(i<n);
    printf("\n");
    printf("Tyl->Przod\n");
    i=n-1;
    do{
        printf("%d ", tablica[i--]);
    }while(i>=0);
    printf("\n");
}
int main(){
    int n;
    int tablica[11] = {1,2,3,4,5,6,7,8,9,10,99};
    n = sizeof(tablica)/sizeof(tablica[0]);
    wyswietl_for(tablica, n);
    wyswietl_while(tablica, n);
    wyswietl_do_while(tablica, n);
    return 0;
}
