#include <stdio.h>  // Essa bibliotca � usada quando queremos adicionar outras fun��es predefinidas da biblioteca de fun��es do pr�-processado
#include <stdlib.h> //Essa bibliotca possui fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras...
#include <conio.h>  // Essa  biblioteca(arquivo cabe�alho) de C usado principalmente por compiladores MS-DOS para fornecer input / output console


char xadrez[8][8] = { // Cria o tabuleiro
    {
        'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T'
    },
    {
        'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
    },
    {
        'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'
    },{
        't', 'c', 'b', 'q', 'k', 'b', 'c', 't'
    },
};

int pintarTelaPreto(){
    system("CLS");
    int lin, col, r;
    for (lin = 0; lin < 8; lin++) { //
        for(r = 0; r < 3; r++) {
            for (col = 0; col < 8; col++) { //
                if((lin + col) % 2 == 0) {
                    printf("\xB2\xB2\xB2\xB2\xB2");// Preenche a casinha
                } else {
                    printf("      ");
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    pintarTelaPreto();
    getch(); // Espera o usu�rio interagir com o xadrez
    return 0;
}


