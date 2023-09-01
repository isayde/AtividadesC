
#include <stdio.h>
#include <math.h>
int main()
{
    float horas, Pdecimal;
    int Pinteira;
    printf("Escreva a hora em número decimais: ");
    scanf("%f", &horas);
    Pinteira = floor(horas);
    Pdecimal = (horas - Pinteira)*100;
    if((Pinteira<= 23 & Pinteira >=0) & (Pdecimal <=59 & Pdecimal>=0)){
        printf("Equivale a %d horas e %.0f minutos", Pinteira, Pdecimal);
        return 0;
    } else {
        printf("Erro na digitação das horas");
        return 1;
    }
}
