#include <stdio.h>

int main(){
    const unsigned granica = 20U;
    unsigned int i, suma;
    suma = 0U;
    for(i=1; i<=granica; i++){
        if(i%3==0)
            suma+= i;
    }
    printf("Suma liczb od 1 do %u wynosi: %u\n", granica, suma);
    return 0;
}
