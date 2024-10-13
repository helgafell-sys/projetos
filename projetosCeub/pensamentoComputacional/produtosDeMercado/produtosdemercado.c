#include <stdio.h>
#include <locale.h>
int main(void){
    int codigo;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o codigo:\n>>");
    scanf("%i",&codigo);
    printf("Produto: ");
     switch (codigo){
        case 1:
            printf ("Alimento nao perecivel\n");
            break;
        case 2:
        case 3:
        case 4:
            printf ("Alimento perecivel\n");
            break;
        case 5:
        case 6:
            printf ("Vestuario\n");
            break;
        case 7:
            printf ("Higiene Pessoal\n");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf ("Limpeza e utensilios domesticos\n");
            break;
        default:
            printf ("Numero invalido");
    return 0;
}

