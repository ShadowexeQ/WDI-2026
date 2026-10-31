#include <stdio.h>

int main(){
    int nr_miesiaca;
    printf("Podaj numer miesiaca: ");
    scanf("%d", &nr_miesiaca);
    switch (nr_miesiaca)
    {
    case 1: case 2: case 3:
        printf("Numer kwartalu I\n");
        break;
    case 4: case 5: case 6:
        printf("Numer kwartalu II\n");
        break;
    case 7: case 8: case 9:
        printf("Numer kwartalu III\n");
        break;
    case 10: case 11: case 12:
        printf("Numer kwartalu IV\n");
        break;
    default:
        printf("Blad! Niepoprawna wartosc!\n");
        break;
    }
    return 0;
}
