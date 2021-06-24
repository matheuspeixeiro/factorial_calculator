/////////////////////////////////////
// SCRIPT PARA CALCULAR O FATORIAL //
//////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

main()
{
    // declararação de variáveis
    float numero, resultado;
    int contagem = 1;
    
    // entrada de dados
    printf("Bem-vindo a calculadora de fatorial de numero!\n\n");
    printf("Digite o numero desejado: ");
    scanf("%f", &numero);
    
    // processamento de dados
    resultado = numero;
    while(contagem < numero){
        resultado = resultado*contagem;
        contagem = contagem + 1;
        //mudar o modo de escrever
    }
    
    // saída de dados
    printf("\n%.0f! = %.0f", numero, resultado);
    
    printf("\n\n");
    system("pause");
}
