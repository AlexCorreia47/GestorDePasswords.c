#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sair();

int menuEdit();

int menuUtilizador();
int menuVisualizar();
int menuUsername();


int main()
{



    return 0;
}

int menuPrincipal()
{
    int opcaoMenuPrincipal;

    printf("\n****************************MENU PRINCIPAL****************************");
    printf("\n\n (1) Inserir novos dados");
    printf("\n (2) Editar dados introduzidos");
    printf("\n (3) Visualizar dados introduzidos");
    printf("\n (0) Sair");
    printf("\n\nOpção -> ");
    scanf("%d", &opcaoMenuPrincipal);

    switch(opcaoMenuPrincipal)
    {
        case 1:
            break;
        case 2:MenuEdit();
            break;
        case 3:
            break;
        case 0:
            break;
        default:
            printf("\n\nOpção inválida!");
    }
}

int menuUtilizador()
{
    int opcaoMenuUtilizador;

    printf("\n****************************MENU UTILIZADOR****************************");
    printf("\n\n (1) Inserir Username");
    printf("\n (2) Voltar ao menu principal");
    scanf("%d", &opcaoMenuUtilizador);

    return opcaoMenuUtilizador;
}
int MenuEdit()
{
    int opcaoMenuEdit;

        printf("\n****************************MENU EDITAR****************************");
        printf("\n\n (1) Editar utilizador");
        printf("\n (2) Editar recurso");
        printf("\n (3) Editar acesso");
        printf("\n (0) Voltar ao menu principal");
        printf("\n\n Opção -> ");
        scanf("%d", &opcaoMenuEdit);

        switch(opcaoMenuEdit)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            break;
        }

    return opcaoMenuEdit;
}
int MenuVisualizar()
{
    int opcaoMenuVisualizar;

    printf("\n****************************MENU VISUALIZAR****************************");
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
