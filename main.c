#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define USERNAME 20
#define PASSWORD 20

typedef struct {
 char
} s_logged_user;

int Sair();
int MenuPrincipal();
int MenuEdit();
int MenuUtilizador();
int MenuVisualizar();
int MenuUsername();

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
                                                    //DOis FOR's e com dois IF's lá no meio

    return 0;
}
int MenuPrincipal()
{
    int opcaoMenuPrincipal, controlo;
        do{

            printf("\n****************************MENU PRINCIPAL****************************");
            printf("\n\n (1) Inserir novos dados de utilizador");
            printf("\n (2) Editar dados introduzidos");
            printf("\n (3) Visualizar dados introduzidos");
            printf("\n (0) Sair");
            printf("\n Opção:  ");
            fflush(stdin);
            controlo=scanf(" %d", &opcaoMenuPrincipal);
            if(opcaoMenuPrincipal< 0 || opcaoMenuPrincipal > 3 || controlo==0)
            {
                printf("\n Opção inválida, selecione novamente");
            }
            }while(opcaoMenuPrincipal< 0 || opcaoMenuPrincipal > 3 || controlo==0);
            switch(opcaoMenuPrincipal)
            {
                case 1:
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
                default: printf("\n Opção Inválida"); // Caractér faz loop
            }
            return 0;
        }


int MenuUtilizador()
{
    int  login;
    char username [USERNAME];

        printf("\n****************************MENU UTILIZADOR****************************");
        printf("\n\n (1) Inserir Username");
        printf("\n (0) Voltar ao menu principal");
        printf("\n Opção:  ");
        scanf(" %d", &login);

       do
       {
        switch(login)
        {
            case 1:
            printf("\n Insira o seu username:  ");
            scanf(" %s", username);
            break;
            case 0:
            break;
            default: printf("\n Opção Inválida");
        }
       }while(login != 0);


    return login;
}
int MenuEdit()
{
    int opcaoMenuEdit;

        printf("\n****************************MENU EDITAR****************************");
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
