#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao;
    int numeroSecreto, palpite;

    printf ("Menu Principal\n");
    printf ("1. iniciar Jogo \n");
    printf ("2. Ver regras\n");
    printf ("3. Sair \n");
    printf ("Escolha uma opção: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
    srand (time(0));
    numeroSecreto = rand() % 10;

    printf ("Digite um numero de 0 a 9: ");
    scanf ("%d", &palpite);

    if (numeroSecreto == palpite)
    {
        printf ("Você acertou!\n");
    printf ("numero secreto %d\n", numeroSecreto);
        }else{
        printf ("Você errou \n");
        printf ("numero secreto %d\n", numeroSecreto);

    }





}
}