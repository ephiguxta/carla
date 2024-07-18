#ifndef PARSER_H
# define PARSER_H
# define DBG_PARSER 1
# include "vector.h"
# include "lexer.h"

  typedef enum { 
    Global, 
    Internal
  } Scope;

  typedef enum {
    Definition,
    IFStatement
  } NType;

  typedef struct {
    char hopeful;
    char *type;
    char *id;
  } DMemory;

  typedef union {
    DMemory definition;
    // IFMemory ifstatement;  
  } Cache;

  typedef struct {
    NType type;
    Scope scope;
    Cache saves;
  } PNode;

  void generate (Vector *root, Vector *tks);

#endif