#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define USERNAME 20
#define PASSWORD 20
#define MAX_UTILIZADOR 20
#define MAX_RECURSO 100
#define MAX_ACESSO 200

typedef struct {
 char
} s_logged_user;

int Sair();
int MenuPrincipal();
int MenuEdit();
int MenuUtilizador();
int MenuRecurso();
int MenuAcesso();

int main()
{

    char username[100];
    char password[100];

    setlocale(LC_ALL,"");
        printf("\n Username: ");
        scanf(" %s", user);
        printf("\n Password: ");
        scanf(" %s", password);


                                                //Definir Structs
                                                    //DOis FOR's e com dois IF's l� no meio

    return 0;
}
int MenuPrincipal()
{
    int opcaoMenuPrincipal, controlo;
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
            return 0;
        }


int MenuUtilizador()
{
    int  login;
    char username [USERNAME];

        printf("****************************MENU UTILIZADOR****************************");
        printf("\n\n (1) Inserir Utilizador");
        printf("\n (2) Mostrar/Editar Utilizador");
        printf("\n (3) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &login);

       do
       {
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
       }while(login != 0);


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

