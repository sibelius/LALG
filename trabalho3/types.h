#ifndef _TYPES_
#define _TYPES_

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

enum type {
    INDEFINED = 1,
    INTEGER,
    REAL
};
typedef enum type VarType;

enum cat {
    PROGRAM = 1,
    VARIABLE,
    PARAMETER,
    PROCEDURE,
    CONSTANT
};
typedef enum cat Categoria;

/* Representa o valor com seu tipo */
struct varValue {
    int i_value;
    float f_value;
    char c_value[40];
    VarType type;
};
typedef struct varValue VarValue;

typedef struct Condicao {
    char c_value[40];
} Condicao;

#endif
