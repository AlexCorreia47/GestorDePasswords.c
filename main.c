#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_UTILIZADOR 20
#define MAX_RECURSO 100
#define MAX_ACESSO 200

int Sair();
int MenuUtilizador();
int MenuRecurso();
int MenuAcesso();

int main()
{
    setlocale(LC_ALL,"");
    int opcaoMenuPrincipal;
        do{

            printf("****************************MENU PRINCIPAL****************************");
            printf("\n\n (1) Menu Utilizador");
            printf("\n (2) Menu Recurso");
            printf("\n (3) Menu Acesso");
            printf("\n (0) Sair");
            printf("\n Opção:  ");
            scanf(" %d", &opcaoMenuPrincipal);

            switch(opcaoMenuPrincipal)
            {case 1:
            MenuUtilizador();
            break;
            case 2:
            MenuRecurso();
            break;
            case 3:
            MenuAcesso();
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
        printf("\n\n (1) Inserir Utilizador");
        printf("\n (2) Mostrar/Editar Utilizador");
        printf("\n (3) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &login);

        switch(login)
        {
        case 1:
        printf("\n Insira o seu Utilizador:  ");
        scanf(" %c", &username);
        break;
        case 2:
        return;
        break;
        default: printf("\n Opção Inválida");
        }

    return login;
}

int MenuRecurso()
{
    int opcaoMenuRecurso;

        printf("****************************MENU RECURSO****************************");
        printf("\n\n (1) Inserir Recurso");
        printf("\n\n (2) Mostrar/Editar Recurso");
        printf("\n (3) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &opcaoMenuRecurso);

    return opcaoMenuRecurso;
}

int MenuAcesso()
{
    int opcaoMenuAcesso;

        printf("****************************MENU ACESSO****************************");
        printf("\n\n (1) Inserir Acesso");
        printf("\n\n (2) Mostrar/Editar Acesso");
        printf("\n (3) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &opcaoMenuAcesso);


    return opcaoMenuAcesso;
}

int Sair()
{

}

int MenuUsername()
{

}

