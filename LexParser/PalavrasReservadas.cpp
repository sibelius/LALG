#include "PalavrasReservadas.h"

// Inicializa a tabela de palavra reservadas
PalavrasReservadas::PalavrasReservadas() {
    tabela = {
        {SIMB_PROGRAM,      T_PROGRAM}, 
        {SIMB_BEGIN,        T_BEGIN}, 
        {SIMB_END,          T_END}, 
        {SIMB_VAR,          T_VAR}, 
        {SIMB_CONST,        T_CONST}, 
        {SIMB_REAL,         T_REAL}, 
        {SIMB_INTEGER,      T_INTEGER}, 
        {SIMB_PROCEDURE,    T_PROCEDURE}, 
        {SIMB_READ,         T_READ}, 
        {SIMB_WRITE,        T_WRITE}, 
        {SIMB_IF,           T_IF}, 
        {SIMB_THEN,         T_THEN}, 
        {SIMB_ELSE,         T_ELSE}, 
        {SIMB_FOR,          T_FOR}, 
    };
}

Token PalavrasReservadas::operator[](const string& palavra) {
    Token myToken;
    try {
        type = tabela.at(palavra);
    } catch(out_of_range& ex) { // Não encontrou o id nas palavras reservadas
        type = T_ID;
    }

    return type;
}
