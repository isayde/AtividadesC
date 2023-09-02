#include <stdio.h>

int main()
{
   int idade, soma=0, contador1=0, contador2 = 0;
   float peso, altura;
   printf("--------------------------------------------------------------------\n");
   printf("------------------------CADASTRO DE PESSOAS-------------------------\n");
   printf("--------------------------------------------------------------------\n");
   for(int i=0; i<10; i++){
       printf("Digite a sua idade: \n");
       scanf("%d", &idade);
       printf("Digite o seu peso em Kg: \n");
       scanf("%f", &peso);
       printf("Digite a sua altura com número decimal (Ex: 1.80): \n");
       scanf("%f", &altura);
       soma += idade;
       if(peso>80 & altura<1.50){
           contador1 += 1;
       }
       if((idade>10 & idade < 30) & altura>1.90){
           contador2 += 1;
       }
   }
   system("clear");
   printf("A média de idades digitadas foi de: %.2f", soma/10);
   printf("A quantidade de pessoa que tem altura inferior a 1.50m e pesa mais de 80 Kg foi de: %d", contador1);
   printf("A porcentagem de pessoas entre 10 e 30 anos que tem mais de 1.90 m de altura é de: %.2f", (contador2/10)*100);
   return 0;
}
