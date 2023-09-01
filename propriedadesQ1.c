#include <stdio.h>
#include <math.h>
int main()
{
    int numero;
    float resto;
    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &numero);
    system("clear");
    if(numero<0){
        printf("O número digitado deve ser positivo, execute o programa novamente\n");
        return 1;
    } else {
        resto = numero % 3;
        printf("O número digitado foi %d\n", numero);
        printf("------------------------------------------------\n");
        printf("1) O número digitado ao quadrado é: %d\n", numero*numero);
        printf("2) O número digitado ao cubo é: %d\n", numero*numero*numero);
        printf("3) A raiz quadrada do número digitado é: %.2f\n", sqrt(numero));
        printf("4) A raiz cúbica do número digitado é: %.2f\n", pow(numero,(1.0/3.0)));
        printf("5) O resto da divisão do número por 3 é: %.2f\n", resto);
        return 0;
    }
}
