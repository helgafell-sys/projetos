#include <stdio.h>
#include <locale.h>
int main(void){
    int codigo;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o c�digo:\n>>");
    scanf("%i",&codigo);
      if (codigo==1){
        printf("Alimento n�o perec�vel\n");
    } else if (codigo == 2 ||codigo == 3 ||codigo == 3 ){
        printf("Alimento perec�vel\n");
    } else if (codigo == 5 || codigo == 6 ){
        printf("Vestu�rio\n");
    } else if (codigo == 7){
        printf("Higiene pessoal\n");
    } else if (codigo >= 8 && codigo <=15 ) {
        printf("Limpeza e utens�lios dom�sticos\n");
    } else {
        printf("N�mero invalido");
    }
    return 0;
}

