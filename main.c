#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Sair();
int MenuEdit();
int MenuUtilizador();
int MenuVisualizar();
int main()
{
    printf("\n ****************************MENU PRINCIPAL****************************");
    MenuUtilizador();
    MenuEdit();
    MenuVisualizar();
    Sair();


    return 0;
}

  int MenuUtilizador()
  {
      printf("\n\n (1) Inserir novos dados de utilzador");

  }
  int MenuEdit()
  {
      printf("\n\n (2) Editar dados introduzidos");
  }
  int MenuVisualizar()
  {
      printf("\n\n (3) Visualizar dados introduzidos");
  }
  int Sair()
  {
      printf("\n\n (0) Sair");
  }
