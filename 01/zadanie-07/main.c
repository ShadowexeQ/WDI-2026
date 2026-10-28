#include <stdio.h>

int main(){
    int a,b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    if(a>b){
        printf("Wieksza liczba jest: %d\n", a);
        printf("Mniejsza liczba jest: %d\n", b);
        printf("a>b");
    }else if(a==b){
        printf("a i b sa sobie rowne\n");
        printf("a=b");
    }else{
        printf("Wieksza liczba jest: %d\n", b);
        printf("Mniejsza liczba jest: %d\n", a);
        printf("a<b");
    }
    return 0;
}
