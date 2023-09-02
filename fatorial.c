#include <stdio.h>

int main()
{
   int numero = 1, fatorial=1;
   while(numero != 0 ){
       fatorial = 1;
       printf("Digite um número inteiro (digite 0 para cancelar): \n");
       scanf("%d", &numero);
       if(numero > 0){
           for(int i=numero; i>0; i--){
               printf("%d", i);
               fatorial = fatorial*i;
           }
           printf("O fatorial de %d é: %d \n", numero, fatorial);
       }else{
           printf("O número digitado foi %d\n", numero);
       }
   }
   system("clear");
   printf("Programa encerrado.");
   return 0;
}
