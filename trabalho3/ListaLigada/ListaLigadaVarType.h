#ifndef LISTALIGADAINT_H_INCLUDED
#define LISTALIGADAINT_H_INCLUDED

#include "../types.h"

struct VarType;

typedef struct NoVarType {
    VarType type;
    struct NoVarType *proximo;
} NoVarType;

typedef struct {
    NoVarType *inicio;
    NoVarType *fim;
} ListaLigadaVarType;

void lli_criar(ListaLigadaVarType *lista);
int lli_vazia(ListaLigadaVarType *lista);
void lli_apagar_lista(ListaLigadaVarType *lista);
void lli_imprimir(ListaLigadaVarType *lista);
int lli_buscar(ListaLigadaVarType *lista, char* name, VarType *type);
int lli_inserir(ListaLigadaVarType *lista, VarType *type);
int lli_remover_fim(ListaLigadaVarType *lista);
int lli_remover_posicao(ListaLigadaVarType *lista, int pos);

#endif // LISTALIGADA_H_INCLUDED
