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
    if (renda < 2000)
        if (dependente >= 1)
            printf ("Você está dentro dos criterios \n");
        } else {
            printf ("Você não se enquadra por conta da idade. \n");
        } else if {
        printf ("Você não se enquadra por conta da renda. \n");
        } else  {
            printf ("Você não se enquadra pela quantidade de dependente.\n");
        }
    
return 0;
}