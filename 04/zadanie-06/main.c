#include <stdio.h>
void szyfrowanie_cezara(char *tekst, int klucz){
    int i, przesuniecie;
    i = 0;
    przesuniecie = ((klucz%26)+26)%26;
    while(tekst[i]!='\0'){
        if(tekst[i]>='A' && tekst[i]<='Z')
            tekst[i] = (tekst[i] - 'A' + przesuniecie)%26+'A';
        if(tekst[i]>='a' && tekst[i]<='z')
            tekst[i] = (tekst[i] - 'a' + przesuniecie)%26+'a';
        i++;
    }
}
void deszyfrowanie_cezara(char *tekst, int klucz){
    szyfrowanie_cezara(tekst, -klucz);
}
int main(){
    int wybor, klucz;
    char tekst[100];
    while(1){
        printf("Wybierz opcje:\n");
        printf("1.Szyfrowanie szyfrem Cezara (przesuniecie o 3)\n");
        printf("2.Deszyfrowanie szyfru Cezara (przesuniecie o 3)\n");
        printf("3. Szyfr Cezara z kluczem\n");
        printf("4. Deszyfracja szyfru Cezara z kluczem\n");
        printf("5. Wyjscie\n");
        printf("Wybierz: ");
        scanf("%d", &wybor);
        switch(wybor){
            case 1: 
                printf("Podaj tekst: ");
                scanf("%99s", tekst);
                szyfrowanie_cezara(tekst, 3);
                printf("Wynik: %s\n", tekst);break;
            case 2: 
                printf("Podaj tekst: ");
                scanf("%99s", tekst);
                deszyfrowanie_cezara(tekst, 3);
                printf("Wynik: %s\n", tekst);break;
            case 3: 
                printf("Podaj tekst: ");
                scanf("%99s", tekst);
                printf("Podaj klucz (liczba przesuniec): ");
                scanf("%d", &klucz);
                szyfrowanie_cezara(tekst, klucz);
                printf("Wynik: %s\n", tekst);break;
            case 4:
                printf("Podaj tekst: ");
                scanf("%99s", tekst);
                printf("Podaj klucz (liczba przesuniec): ");
                scanf("%d", &klucz);
                deszyfrowanie_cezara(tekst, klucz);
                printf("Wynik: %s\n", tekst);break;
            case 5: return 0;
            default: printf("Nieprawidlowa opcja!\n");
        }
    }
    return 0;
}
