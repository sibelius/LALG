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
    ITEM item;
    item.chave = i;
    item.valor = rand() % 10;
    inserir(&lista, &item);
  }

  imprimir(&lista);

  ITEM item;
  if (buscar(&lista, 5, &item)){
    printf("encontrado: %d - %d\n---\n", item.chave, item.valor);
  }

  remover_posicao(&lista, 5);

  for (i = 0; i < 10; i++) {
    remover_fim(&lista);
  }

  imprimir(&lista);

  apagar_lista(&lista);

  return 0;
}
