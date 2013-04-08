/* Generated By:JavaCC: Do not edit this line. DFPLalgParser.java */
package dfp;

public class DFPLalgParser implements DFPLalgParserConstants {
  public static void main(String args []) throws ParseException
  {
    DFPLalgParser parser = new DFPLalgParser(System.in);
    while (true)
    {
      try
      {

                DFPLalgParser.parser();
                } catch(Exception e)
                {
                        System.out.println("NOK.");
        System.out.println(e.getMessage());
        DFPLalgParser.ReInit(System.in);
                }catch (Error e)
      {
        System.out.println("Oops.");
        System.out.println(e.getMessage());
        DFPLalgParser.ReInit(System.in);
      }
    }
  }

  static final public void parser() throws ParseException {
  Token t;
    switch ((jj_ntk==-1)?jj_ntk():jj_ntk) {
    case IDENTIFIER_MG:
      t = jj_consume_token(IDENTIFIER_MG);
                                          System.out.println(t.image + " - erro: id muito grande!");
      break;
    case IDENTIFIER:
      t = jj_consume_token(IDENTIFIER);
                                                  System.out.println(t.image + " - id");
      break;
    case COMMENT_NF:
      t = jj_consume_token(COMMENT_NF);
                                                  System.out.println(t.image + " - erro: comentario nao fechado!");
      break;
    case SIMB_NUM_INTEIRO:
      t = jj_consume_token(SIMB_NUM_INTEIRO);
                                          System.out.println(t.image + " - simb_num_int");
      break;
    case SIMB_NUM_REAL:
      t = jj_consume_token(SIMB_NUM_REAL);
                                          System.out.println(t.image + " - simb_num_real");
      break;
    case SIMB_NUM_REAL_MF:
      t = jj_consume_token(SIMB_NUM_REAL_MF);
                                          System.out.println(t.image + " - erro: numero real mal formado!");
      break;
    case SIMB_ATRIB:
      t = jj_consume_token(SIMB_ATRIB);
                                                  System.out.println(t.image + " - simb_atrib");
      break;
    case SIMB_PONTO_VIRGULA:
      t = jj_consume_token(SIMB_PONTO_VIRGULA);
                                          System.out.println(t.image + " - simb_virgula");
      break;
    case SIMB_DOIS_PONTOS:
      t = jj_consume_token(SIMB_DOIS_PONTOS);
                                          System.out.println(t.image + " - simb_dois_pontos");
      break;
    case SIMB_ABRE_PARENTESE:
      t = jj_consume_token(SIMB_ABRE_PARENTESE);
                                  System.out.println(t.image + " - simb_abre_parentese");
      break;
    case SIMB_FECHA_PARENTESE:
      t = jj_consume_token(SIMB_FECHA_PARENTESE);
                                  System.out.println(t.image + " - simb_fecha_parentese");
      break;
    case SIMB_VIRGULA:
      t = jj_consume_token(SIMB_VIRGULA);
                                          System.out.println(t.image + " - simb_virgula");
      break;
    case SIMB_PONTO:
      t = jj_consume_token(SIMB_PONTO);
                                                  System.out.println(t.image + " - simb_ponto");
      break;
    case SIMB_RELACAO:
      t = jj_consume_token(SIMB_RELACAO);
                                          System.out.println(t.image + " - simb_relacao");
      break;
    case SIMB_OPP_ADD:
      t = jj_consume_token(SIMB_OPP_ADD);
                                          System.out.println(t.image + " - simb_opp_add");
      break;
    case SIMB_OPP_MUL:
      t = jj_consume_token(SIMB_OPP_MUL);
                                          System.out.println(t.image + " - simb_opp_mul");
      break;
    case OTHER:
      t = jj_consume_token(OTHER);
                                                  System.out.println(t.image + " - unknown");
      break;
    default:
      jj_la1[0] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
  }

  static private boolean jj_initialized_once = false;
  /** Generated Token Manager. */
  static public DFPLalgParserTokenManager token_source;
  static SimpleCharStream jj_input_stream;
  /** Current token. */
  static public Token token;
  /** Next token. */
  static public Token jj_nt;
  static private int jj_ntk;
  static private int jj_gen;
  static final private int[] jj_la1 = new int[1];
  static private int[] jj_la1_0;
  static {
      jj_la1_init_0();
   }
   private static void jj_la1_init_0() {
      jj_la1_0 = new int[] {0x3fffe00,};
   }

  /** Constructor with InputStream. */
  public DFPLalgParser(java.io.InputStream stream) {
     this(stream, null);
  }
  /** Constructor with InputStream and supplied encoding */
  public DFPLalgParser(java.io.InputStream stream, String encoding) {
    if (jj_initialized_once) {
      System.out.println("ERROR: Second call to constructor of static parser.  ");
      System.out.println("       You must either use ReInit() or set the JavaCC option STATIC to false");
      System.out.println("       during parser generation.");
      throw new Error();
    }
    jj_initialized_once = true;
    try { jj_input_stream = new SimpleCharStream(stream, encoding, 1, 1); } catch(java.io.UnsupportedEncodingException e) { throw new RuntimeException(e); }
    token_source = new DFPLalgParserTokenManager(jj_input_stream);
    token = new Token();
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 1; i++) jj_la1[i] = -1;
  }

  /** Reinitialise. */
  static public void ReInit(java.io.InputStream stream) {
     ReInit(stream, null);
  }
  /** Reinitialise. */
  static public void ReInit(java.io.InputStream stream, String encoding) {
    try { jj_input_stream.ReInit(stream, encoding, 1, 1); } catch(java.io.UnsupportedEncodingException e) { throw new RuntimeException(e); }
    token_source.ReInit(jj_input_stream);
    token = new Token();
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 1; i++) jj_la1[i] = -1;
  }

  /** Constructor. */
  public DFPLalgParser(java.io.Reader stream) {
    if (jj_initialized_once) {
      System.out.println("ERROR: Second call to constructor of static parser. ");
      System.out.println("       You must either use ReInit() or set the JavaCC option STATIC to false");
      System.out.println("       during parser generation.");
      throw new Error();
    }
    jj_initialized_once = true;
    jj_input_stream = new SimpleCharStream(stream, 1, 1);
    token_source = new DFPLalgParserTokenManager(jj_input_stream);
    token = new Token();
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 1; i++) jj_la1[i] = -1;
  }

  /** Reinitialise. */
  static public void ReInit(java.io.Reader stream) {
    jj_input_stream.ReInit(stream, 1, 1);
    token_source.ReInit(jj_input_stream);
    token = new Token();
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 1; i++) jj_la1[i] = -1;
  }

  /** Constructor with generated Token Manager. */
  public DFPLalgParser(DFPLalgParserTokenManager tm) {
    if (jj_initialized_once) {
      System.out.println("ERROR: Second call to constructor of static parser. ");
      System.out.println("       You must either use ReInit() or set the JavaCC option STATIC to false");
      System.out.println("       during parser generation.");
      throw new Error();
    }
    jj_initialized_once = true;
    token_source = tm;
    token = new Token();
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 1; i++) jj_la1[i] = -1;
  }

  /** Reinitialise. */
  public void ReInit(DFPLalgParserTokenManager tm) {
    token_source = tm;
    token = new Token();
    jj_ntk = -1;
    jj_gen = 0;
    for (int i = 0; i < 1; i++) jj_la1[i] = -1;
  }

  static private Token jj_consume_token(int kind) throws ParseException {
    Token oldToken;
    if ((oldToken = token).next != null) token = token.next;
    else token = token.next = token_source.getNextToken();
    jj_ntk = -1;
    if (token.kind == kind) {
      jj_gen++;
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    throw generateParseException();
  }


/** Get the next Token. */
  static final public Token getNextToken() {
    if (token.next != null) token = token.next;
    else token = token.next = token_source.getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */
  static final public Token getToken(int index) {
    Token t = token;
    for (int i = 0; i < index; i++) {
      if (t.next != null) t = t.next;
      else t = t.next = token_source.getNextToken();
    }
    return t;
  }

  static private int jj_ntk() {
    if ((jj_nt=token.next) == null)
      return (jj_ntk = (token.next=token_source.getNextToken()).kind);
    else
      return (jj_ntk = jj_nt.kind);
  }

  static private java.util.List<int[]> jj_expentries = new java.util.ArrayList<int[]>();
  static private int[] jj_expentry;
  static private int jj_kind = -1;

  /** Generate ParseException. */
  static public ParseException generateParseException() {
    jj_expentries.clear();
    boolean[] la1tokens = new boolean[26];
    if (jj_kind >= 0) {
      la1tokens[jj_kind] = true;
      jj_kind = -1;
    }
    for (int i = 0; i < 1; i++) {
      if (jj_la1[i] == jj_gen) {
        for (int j = 0; j < 32; j++) {
          if ((jj_la1_0[i] & (1<<j)) != 0) {
            la1tokens[j] = true;
          }
        }
      }
    }
    for (int i = 0; i < 26; i++) {
      if (la1tokens[i]) {
        jj_expentry = new int[1];
        jj_expentry[0] = i;
        jj_expentries.add(jj_expentry);
      }
    }
    int[][] exptokseq = new int[jj_expentries.size()][];
    for (int i = 0; i < jj_expentries.size(); i++) {
      exptokseq[i] = jj_expentries.get(i);
    }
    return new ParseException(token, exptokseq, tokenImage);
  }

  /** Enable tracing. */
  static final public void enable_tracing() {
  }

  /** Disable tracing. */
  static final public void disable_tracing() {
  }

}
