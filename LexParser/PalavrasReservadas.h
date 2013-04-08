#include <map.h>
#include "Token.h"

//Palavras Reservadas
#define SIMB_PROGRAM        "program"
#define SIMB_BEGIN          "begin"
#define SIMB_END            "end"
#define SIMB_VAR            "var"
#define SIMB_CONST          "const"
#define SIMB_REAL           "real"
#define SIMB_INTEGER        "integer"
#define SIMB_PROCEDURE      "procedure"
#define SIMB_READ           "read"
#define SIMB_WRITE          "write"
#define SIMB_IF             "if"
#define SIMB_THEN           "then"
#define SIMB_ELSE           "else"
#define SIMB_FOR            "for"

using namespace std;

class PalavrasReservadas
{
public:
    PalavrasReservadas();

    /* Verifica se é palavra reservada */
    Token operator [](const string& palavra);
private:
    unordened_map<string, Token> tabela;
};

