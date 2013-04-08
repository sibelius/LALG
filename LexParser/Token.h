#include <string>

using namespace std;

#define N_TOKENS 43

typedef int Token;

enum tokentype {
    T_PROGRAM       = 100,
    T_BEGIN         = 101,
    T_END           = 102,
    T_VAR           = 103,
    T_CONST         = 104,
    T_REAL          = 105,
    T_INTEGER       = 106,
    T_PROCEDURE     = 107,
    T_READ          = 108,
    T_WRITE         = 109,
    T_WHILE         = 110,
    T_IF            = 111,
    T_THEN          = 112,
    T_ELSE          = 113,
    T_FOR           = 114,
    T_TO            = 115,
    T_DO            = 116,

    T_EQUAL         = 117,
    T_DIFF          = 118,
    T_GREATER_EQ    = 119,
    T_LESSER_EQ     = 120,
    T_GREATER       = 121,
    T_LESSER        = 122,
    T_PLUS          = 123,
    T_MINUS         = 124,
    T_TIMES         = 125,
    T_DIVISION      = 126,
    T_ASSIGN        = 127,
    T_SEMICOLON     = 128,
    T_COLON         = 129,
    T_L_PAREN       = 130,
    T_R_PAREN       = 131,
    T_COMMA         = 132,
    T_DOT           = 133,
    
    T_NINTEGER      = 134,
    T_NREAL         = 135,
    T_ID            = 136,

    //Errors
    T_MF_INTEGER    = 137,
    T_MF_REAL       = 138,
    T_MF_ID         = 139,
    T_LONG_ID       = 140,
    T_ERR_COMMENT   = 141,
    T_UNKNOWN       = 142
};
/*
string name[N_TOKENS];

name[T_PROGRAM  ] = "simb_program"; 
name[T_BEGIN     ] = "simb_begin";
name[T_END        ] = "simb_end";
name[T_VAR        ] = "simb_var";
name[T_CONST      ] = "simb_const";
name[T_REAL       ] = "simb_real";
name[T_INTEGER    ] = "simb_integer";
name[T_PROCEDURE  ] = "simb_procedure";
name[T_READ       ] = "simb_read";
name[T_WRITE      ] = "simb_write";
name[T_WHILE      ] = "simb_while";
name[T_IF         ] = "simb_if";
name[T_THEN       ] = "simb_
name[T_ELSE       ]
name[T_FOR        ]
name[T_EQUAL      ]
name[T_DIFF       ]
name[T_GREATER_EQ ]
name[T_LESSER_EQ  ]
name[T_GREATER    ]
name[T_LESSER     ]
name[T_PLUS       ]
name[T_MINUS      ]
name[T_TIMES      ]
name[T_DIVISION   ]
name[T_ASSIGN     ]
name[T_SEMICOLON  ]
name[T_COLON      ]
name[T_L_PAREN    ]
name[T_R_PAREN    ]
name[T_COMMA      ]
name[T_DOT        ]
name[T_NINTEGER   ]
name[T_NREAL      ]
name[T_ID         ]

name[T_MF_INTEGER ]
name[T_MF_REAL    ]
name[T_MF_ID      ]
name[T_LONG_ID    ]
name[T_ERR_COMMENT]
name[T_UNKNOWN    ]
*/
