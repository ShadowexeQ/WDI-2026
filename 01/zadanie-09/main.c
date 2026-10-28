#include <stdio.h>

int main()
{
    int a,b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d", &a,&b);
    if(b==0){
        printf("Nie dziel przez zero!");
        return 0;
    }
    if(a%b==0){
        printf("Pierwsza liczba jest podzielna przez druga");
    }
    else{
        printf("Pierwsza liczba nie jest podzielna przez druga");
    }
    return 0;
}
