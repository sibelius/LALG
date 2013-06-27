#include <stdio.h>
#include <stdlib.h>

#include "ListaLigadaInt.h"

void lli_criar(ListaLigadaInt *lista) {
  lista->inicio = NULL;
  lista->fim = NULL;
}

int lli_vazia(ListaLigadaInt *lista) {
  return (lista->inicio == NULL);
}

void lli_apagar_lista(ListaLigadaInt *lista) {
  if (!lli_vazia(lista)) {
    NoInt *paux = lista->inicio;

    while (paux != NULL) {
      NoInt *prem = paux;
      paux = paux->proximo;
      free(prem);
    }
  }

  lista->inicio = NULL;
  lista->fim = NULL;
}

void lli_imprimir(ListaLigadaInt *lista) {
  NoInt *paux = lista->inicio;

  while (paux != NULL) {
    printf("%d\n", paux->type);
    paux = paux->proximo;
  }
}

int lli_buscar(ListaLigadaInt *lista, char* name, int *type) {
  NoInt *paux = lista->inicio;

  while (paux != NULL) {
    if (paux->type == *type) {
      *type = paux->type;
      return 1;
    }
    paux = paux->proximo;
  }

  return 0;
}

int lli_inserir(ListaLigadaInt *lista, int *type) {
  //cria um novo nó
  NoInt *pnovo = (NoInt *)malloc(sizeof(NoInt));

  if (pnovo != NULL) { //verifica se a memória foi alocada
    pnovo->type = *type; //preenche os dados
    pnovo->proximo = NULL; //define que o próximo é nulo

    if (lista->inicio == NULL) { //se a lista for vazia
      lista->inicio = pnovo; //inicio aponta para novo
    } else {
      lista->fim->proximo = pnovo; //proximo do fim aponto para novo
    }

    lista->fim = pnovo; //fim aponta para novo

    return 1;
  } else {
    return 0;
  }
}

int lli_remover_fim(ListaLigadaInt *lista) {
  if (!lli_vazia(lista)) {
    //procura o penúltimo nó
    NoInt *paux  = lista->inicio;
    while (paux->proximo != NULL && paux->proximo != lista->fim) {
      paux = paux->proximo;
    }

    if (lista->inicio == lista->fim) {//a lista tem um nó
      free(paux->proximo); //libera o único nó
      lista->inicio = lista->fim = NULL; //lista vazia
    } else {
      free(lista->fim); //libera último nó
      lista->fim = paux; //penúltimo nó vira último
      lista->fim->proximo = NULL;
    }

    return 1;
  } else {
    return 0;
  }
}

int lli_remover_posicao(ListaLigadaInt *lista, int pos) {
  int i;

  if (!lli_vazia(lista)) { //verifica se a lista está vazia
    if (pos == 0) { //removendo o primeiro nó
      if (lista->inicio == lista->fim) { //se a lista tem um nó
        lista->fim = NULL;
      }

      NoInt *paux = lista->inicio;
      lista->inicio = lista->inicio->proximo;
      free(paux);
    } else { //removendo do segundo nó para frente
      //aponta para o nó anterior a ser retirado
      NoInt *paux = lista->inicio;
      for (i = 0; i < pos-1; i++) {
        if (paux->proximo != lista->fim) {
          paux = paux->proximo;
        } else {
          return 0;
        }
      }

      NoInt *pos = paux->proximo;
      paux->proximo = paux->proximo->proximo;

      if (pos->proximo == NULL) { //último nó retirado
        lista->fim = paux;
      }

      free(pos);
    }
    return 1;
  } else {
    return 0;
  }
}
