#ifndef LISTALIGADAVAR_H_INCLUDED
#define LISTALIGADAVAR_H_INCLUDED

typedef struct {
  char* name;
  int type;
} Variable;

typedef struct NoVar {
  Variable variable;
  struct NoVar *proximo;
} NoVar;

typedef struct {
  NoVar *inicio;
  NoVar *fim;
} ListaLigadaVar;

void llvar_criar(ListaLigadaVar *lista);
int llvar_vazia(ListaLigadaVar *lista);
void llvar_apagar_lista(ListaLigadaVar *lista);
void llvar_imprimir(ListaLigadaVar *lista);
int llvar_buscar(ListaLigadaVar *lista, char* name, Variable *variable);
int llvar_inserir(ListaLigadaVar *lista, Variable *variable);
int llvar_remover_fim(ListaLigadaVar *lista);
int llvar_remover_posicao(ListaLigadaVar *lista, int pos);

#endif // LISTALIGADA_H_INCLUDED
