#include <stdio.h>

int main (){

    int idade;
    float renda;
    int dependente;

    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    printf ("Digite sua renda: ");
    scanf ("%f", &renda);
    printf ("Digite o número de dependentes: ");
    scanf ("%d", &dependente);

    

    if (idade <= 26 && idade >= 65){
    if (renda < 2000){
        if (dependente > 0)
        {
            printf ("Você atende aos criterios! \n");
        } else {
            printf ("Você não atende ao criterio idade. \n");
        } 
    }

return 0;


    }