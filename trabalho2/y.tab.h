#define T_PROGRAM 257
#define T_BEGIN 258
#define T_END 259
#define T_VAR 260
#define T_CONST 261
#define T_REAL 262
#define T_INTEGER 263
#define T_PROCEDURE 264
#define T_READ 265
#define T_WRITE 266
#define T_WHILE 267
#define T_IF 268
#define T_THEN 269
#define T_ELSE 270
#define T_FOR 271
#define T_TO 272
#define T_DO 273
#define T_EQUAL 274
#define T_DIFF 275
#define T_GREATER_EQ 276
#define T_LESSER_EQ 277
#define T_GREATER 278
#define T_LESSER 279
#define T_PLUS 280
#define T_MINUS 281
#define T_TIMES 282
#define T_DIVISION 283
#define T_ASSIGN 284
#define T_SEMICOLON 285
#define T_COLON 286
#define T_L_PAREN 287
#define T_R_PAREN 288
#define T_COMMA 289
#define T_DOT 290
#define T_ID 291
#define ERR_MF_INTEGER 292
#define ERR_MF_REAL 293
#define ERR_MF_ID 294
#define ERR_LONG_ID 295
#define ERR_COMMENT 296
#define ERR_UNKNOWN 297
#define T_INUMBER 298
#define T_RNUMBER 299
typedef union YYSTYPE {
	int i_number;
	float r_number;
	char* name;
	struct snode {
		int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;
} YYSTYPE;
extern YYSTYPE yylval;
