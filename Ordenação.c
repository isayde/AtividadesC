
#include <stdio.h>

int main()
{
    int numero, maior, meio, menor, escolha;
    printf("Digite um número: \n");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    meio = numero;
    for(int i=0; i<2; i++){
        printf("Digite outro número: \n");
        scanf("%d", &numero);
        if(numero > meio){
            maior = numero; /*60*/
        } else if(numero > menor & numero < maior) {
            meio = numero; /*60*/
        } else {
            menor = numero; /*60*/
        }
    }
    printf("Escolha uma das opções: \n1 -  Mostre os números em ordem crescente \n2 -  Mostre os números em ordem decrescente \n3 -  Mostre o menor número entre os demais.\n");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            printf("Os números em ordem crescente são: %d - %d - %d", menor, meio, maior);
            break;
        case 2:
            printf("Os números em ordem decrescente são: %d - %d - %d", maior, meio, menor);
            break;
        case 3:
            printf("Colocando o menor no meio fica: %d - %d - %d", maior, menor, meio);
        default:
            printf("Escolha incorreta");
            return 1;
    }
    return 0;
}
