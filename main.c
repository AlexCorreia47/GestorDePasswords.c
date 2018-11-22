#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Sair();
int MenuEdit();
int MenuUtilizador();
int MenuVisualizar();
int MenuUsername();

int main()
{
    int opcaoMenuPrincipal;

    printf("****************************MENU PRINCIPAL****************************");
    printf("\n\n (1) Inserir novos dados de utilizador");
    printf("\n (2) Editar dados introduzidos");
    printf("\n (3) Visualizar dados introduzidos");
    printf("\n (0) Sair");
    scanf("%d", &opcaoMenuPrincipal);

    switch(opcaoMenuPrincipal)
    case 1:
case 2:
case 3:
case 0:
    return 0;
}

int MenuUtilizador()
{
    int opcaoMenuUtilizador;

    printf("****************************MENU UTILIZADOR****************************");
    printf("\n\n (1) Inserir Username");
    printf("\n (2) Voltar ao menu principal");
    scanf("%d", &opcaoMenuUtilizador);

    return opcaoMenuUtilizador;
}
int MenuEdit()
{
    int opcaoMenuEdit;

    printf("****************************MENU EDITAR****************************");
    printf("\n\n (1) Inserir Username");
    printf("\n (2) Voltar ao menu principal");
    scanf("%d", &opcaoMenuEdit);

    return opcaoMenuEdit;
}
int MenuVisualizar()
{
    int opcaoMenuVisualizar;

    printf("****************************MENU VISUALIZAR****************************");
    printf("\n\n (1) Inserir Username");
    printf("\n (2) Voltar ao menu principal");
    scanf("%d", &opcaoMenuVisualizar);

    return opcaoMenuVisualizar;
}
int Sair()
{

}

int MenuUsername()
{

}
