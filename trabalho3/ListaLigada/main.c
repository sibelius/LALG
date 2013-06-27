#include <stdio.h>
#include <stdlib.h>

#include "ListaLigada.h"

int main() {
  int i;

  //criar a lista
  LISTA_LIGADA lista;
  criar(&lista);

  //inserir itens na lista
  for (i = 0; i < 10; i++) {
    Variable variable;
    variable.name = "a";
    variable.type = rand() % 10;
    inserir(&lista, &variable);
  }

  imprimir(&lista);

  Variable variable;
  if (buscar(&lista, "a", &variable)){
    printf("encontrado: %s - %d\n---\n", variable.name, variable.type);  
  }

  remover_posicao(&lista, 5);

  for (i = 0; i < 10; i++) {
    remover_fim(&lista);
  }

  imprimir(&lista);

  apagar_lista(&lista);

  return 0;
}
