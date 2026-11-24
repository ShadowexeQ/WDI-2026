#include <stdio.h>
int czy_anagram(char *wyraz1, char *wyraz2){
    int i, d1, d2;
    char temp;
    int licznik[26] = {0};
    d1 = 0;
    d2 = 0;
    while(wyraz1[d1]!='\0')
        d1++;
    while(wyraz2[d2]!='\0')
        d2++;
    if(d1 != d2)
        return 0;
    for(i=0; i<d1; i++){
        temp = wyraz1[i];
        if(temp >= 'A' && temp <= 'Z') 
            temp+=32;
        if(temp >= 'a' && temp <= 'z')
            licznik[temp-'a']++;
    }
    for(i=0; i<d2; i++){
        temp = wyraz2[i];
        if(temp >= 'A' && temp <= 'Z') 
            temp+=32;
        if(temp >= 'a' && temp <= 'z')
            licznik[temp-'a']--;
    }
    for(i=0; i<26; i++)
        if(licznik[i]!= 0)
            return 0;
    return 1;
}
int main(){
    char wyraz1[100], wyraz2[100];
    printf("Podaj wyraz1: ");
    scanf("%99s", wyraz1);
    printf("Podaj wyraz2: ");
    scanf("%99s", wyraz2);
    if(czy_anagram(wyraz1, wyraz2))
        printf("Wyrazy sa anagramami");
    else
        printf("Wyrazy nie sa anagramami");
    return 0;
}
