package dfp;

import java.util.Hashtable;

public class PalavrasReservadas extends Object {
	 private Hashtable<String, MyToken> tabela;
	 public PalavrasReservadas(){
		tabela = new Hashtable<String, MyToken>();
		tabela.put("program", MyToken.T_PROGRAM);
		tabela.put("begin", MyToken.T_BEGIN);
		tabela.put("end", MyToken.T_END);
		tabela.put("var", MyToken.T_VAR);
		tabela.put("real", MyToken.T_REAL);
		tabela.put("integer", MyToken.T_INTEGER);
		tabela.put("procedure", MyToken.T_PROCEDURE);
		tabela.put("read", MyToken.T_READ);
		tabela.put("write", MyToken.T_WRITE);
		tabela.put("while", MyToken.T_WHILE);
		tabela.put("if", MyToken.T_IF);
		tabela.put("then", MyToken.T_THEN);
		tabela.put("else", MyToken.T_ELSE);
		tabela.put("for", MyToken.T_FOR);
		tabela.put("to", MyToken.T_TO);
		tabela.put("do", MyToken.T_DO);
	 }	 
	 public PalavrasReservadas(Hashtable<String, MyToken> tabela) {
	    this.tabela = tabela;

	 }
	 public Hashtable<String, MyToken> getTabela(){
		  return this.tabela;
	 }
 }
