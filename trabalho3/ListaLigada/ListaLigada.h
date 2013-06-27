#ifndef LISTALIGADA_H_INCLUDED
#define LISTALIGADA_H_INCLUDED

typedef struct {
  int chave;
  int valor;
} ITEM;

typedef struct NO {
  ITEM item;
  struct NO *proximo;
} NO;

typedef struct {
  NO *inicio;
  NO *fim;
} LISTA_LIGADA;

void criar(LISTA_LIGADA *lista);
int vazia(LISTA_LIGADA *lista);
void apagar_lista(LISTA_LIGADA *lista);
void imprimir(LISTA_LIGADA *lista);
int buscar(LISTA_LIGADA *lista, int chave, ITEM *item);
int inserir(LISTA_LIGADA *lista, ITEM *item);
int remover_fim(LISTA_LIGADA *lista);
int remover_posicao(LISTA_LIGADA *lista, int pos);

#endif // LISTALIGADA_H_INCLUDED
