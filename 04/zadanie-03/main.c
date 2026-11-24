#include <stdio.h>

int main(){
    int i;
    char napis[100];
    int licznik[26] = {0};
    printf("Podaj napis: ");
    fgets(napis, sizeof(napis), stdin);
    for(i=0; napis[i]!='\0';i++){
        if(napis[i] >= 'A' && napis[i] <='Z')
            napis[i]+=32;
        if(napis[i] >= 'a' && napis[i] <='z')
            licznik[napis[i] -'a']++;
    }
    printf("Wynik:\n");
    for(i=0; i<26; i++)
        if(licznik[i]!=0)
            printf("%c: %d\n", i+'a', licznik[i]);
    return 0;
}
