#ifndef LISTALIGADAINT_H_INCLUDED
#define LISTALIGADAINT_H_INCLUDED

typedef struct NoInt {
  int type;
  struct NoInt *proximo;
} NoInt;

typedef struct {
  NoInt *inicio;
  NoInt *fim;
} ListaLigadaInt;

void lli_criar(ListaLigadaInt *lista);
int lli_vazia(ListaLigadaInt *lista);
void lli_apagar_lista(ListaLigadaInt *lista);
void lli_imprimir(ListaLigadaInt *lista);
int lli_buscar(ListaLigadaInt *lista, char* name, int *type);
int lli_inserir(ListaLigadaInt *lista, int *type);
int lli_remover_fim(ListaLigadaInt *lista);
int lli_remover_posicao(ListaLigadaInt *lista, int pos);

#endif // LISTALIGADA_H_INCLUDED
