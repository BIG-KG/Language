#ifndef TREE_TYPES
#define TREE_TYPES

#include <stdint.h>
#include "tree_const.h"

const int MAX_OPERATION_NAME_SIZE = 128;
const int MAX_FUNKTION_NAME_SIZE  = 128;
const int NAO = -1;
const int NAF = -1;

enum dataTypes
{
    FUNC = 2,
    CONST = 3,
    VARIABLE = 4
};

enum funcs
{
    SIN,
    COS,
    LOGN,
    DIF,
    SUM,
    SUB,
    DIV,
    MUL,
    POW,
    LN,
    ASIN,
    ACOS,
    TNG,
    CTG,
    ATNG,
    ACTG,
};

union calc_node_data
{
    double cnst = 0;
    int    var ;
    int    func;
};


struct calc_node
{
    int            nodeType = -1; //no data type has code -1
    calc_node_data nodeData = {};
};


typedef calc_node elem_t;

struct node_t
{
    elem_t data   = {};
    node_t *right = NULL; 
    node_t *left  = NULL;

};

struct tree_t
{
    //void   *occupiedMemStart = NULL; // remove
    node_t *treeStart       = NULL;
    //int     capacity         = 0;
    //int     currentElement   = 0;

};

struct node_way_t
{
    int     depth       = 0;
    int    *way         = NULL;
    node_t *node_addres = NULL;
};

struct codeWord_t
{
    int  codeWordCode = NAO;
    char wordName[MAX_OPERATION_NAME_SIZE] = "";
};

struct funktion_t
{
    int  funktionCode = NAF;
    char funktionName[MAX_FUNKTION_NAME_SIZE] = "";
    int  numOfArguments = -1;
};

codeWord_t o = {};

#endif /*TREE_TYPES*/
