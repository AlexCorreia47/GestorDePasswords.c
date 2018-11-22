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
    setlocale(LC_ALL,"");
    int opcaoMenuPrincipal;
        do{

            printf("****************************MENU PRINCIPAL****************************");
            printf("\n\n (1) Inserir novos dados de utilizador");
            printf("\n (2) Editar dados introduzidos");
            printf("\n (3) Visualizar dados introduzidos");
            printf("\n (0) Sair");
            printf("\n Opção:  ");
            scanf(" %d", &opcaoMenuPrincipal);

            switch(opcaoMenuPrincipal)
            {case 1:
            MenuUtilizador();
            break;
            case 2:
            MenuEdit();
            break;
            case 3:
            MenuVisualizar();
            break;
            case 0:
            break;
            default: printf("\n Opção Inválida");
            break;
            }

    }while(opcaoMenuPrincipal != 0);
    return 0;
}

int MenuUtilizador()
{
    int  login;
    char username;

        printf("****************************MENU UTILIZADOR****************************");
        printf("\n\n (1) Inserir Username");
        printf("\n (2) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &login);

        switch(login)
        {
        case 1:
        printf("\n Insira o seu username:  ");
        scanf(" %c", &username);
        break;
        case 2:
        return;
        break;
        default: printf("\n Opção Inválida");
        }

    return login;
}
int MenuEdit()
{
    int opcaoMenuEdit;

        printf("****************************MENU EDITAR****************************");
        printf("\n\n (1) Inserir Username");
        printf("\n (2) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &opcaoMenuEdit);

    return opcaoMenuEdit;
}
int MenuVisualizar()
{
    int opcaoMenuVisualizar;

        printf("****************************MENU VISUALIZAR****************************");
        printf("\n\n (1) Inserir Username");
        printf("\n (2) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &opcaoMenuVisualizar);


    return opcaoMenuVisualizar;
}
int Sair()
{

}

int MenuUsername()
{

}
