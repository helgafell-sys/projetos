#include <stdio.h>
#include <locale.h>

int main (void) {
    int numero, i;
    int fatorial = 1;
    setlocale(LC_ALL, "Portuguese");

    printf("digite um numero natural:");
    scanf("%i", &numero);
    if (numero == 0) {
        printf ("O fatorial é 1");
    }
    else if(numero>0){
        for(i=1;i<=numero;i++) {
        fatorial = fatorial*i;
        }
        printf ("O fatorial é %i",fatorial);
    } else {
        printf("Número não é natural");
    }
    return 0;
    }
