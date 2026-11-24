#include <stdio.h>
#include <ctype.h>
void zamien_ctype(char *imie){
    int i;
    if(imie[0]=='\0')
        return;
    imie[0] = toupper(imie[0]);
    for(i=1; imie[i]!='\0'; i++)
        imie[i] = tolower(imie[i]);
}
void zamien_ascii(char *imie){
    int i;
    if(imie[0]=='\0')
        return;
    if(imie[0]>='a' && imie[0]<='z')
        imie[0]-=32;
    for(i=1; imie[i]!='\0'; i++)
        if(imie[i] >= 'A' && imie[i] <= 'Z')
            imie[i]+=32;
}
int main(){
    int wybor;
    char imie[20];
    printf("Podaj imie: ");
    scanf("%19s", imie);
    printf("Wybierz tryb:\n1.Przy uzyciu biblioteki ctype.h\n2.Bez uzycia biblioteki ctype.h\n");
    scanf("%d", &wybor);
    switch(wybor){
        case 1: 
            zamien_ctype(imie);
            printf("Wynik (uzywajac ctype.h): %s", imie);break;
        case 2:
            zamien_ascii(imie);
            printf("Wynik (uzywajac ASCII): %s", imie);break;
        default: 
            printf("Zla opcja!");break;
    }
    return 0;
}
