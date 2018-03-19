#include "node.h"

using namespace std;

void setDList(node *list);

node *getDList();

void List(node *n);

int nodeLength(node *n);

bool Atom(node *n);

bool isNull(node *n);

bool isInteger(node *n);

node *car(node *n);

node *cdr(node *n);

node *cons(node *left, node *right);

node *PLUS(node *left, node *right);

node *MINUS(node *left, node *right);

node *TIMES(node *left, node *right);

bool eq(node *left, node *right);

bool LESS(node *left, node *right);

bool GREATER(node *left, node *right);

node *eval(node *root, node *alist, node *dlist);

node *cond(node *root, node *alist, node *dlist);

node *evalList(node *root, node *alist, node *dlist);

bool command(node *root);

node *apply(node *function, node *parameters, node *alist, node *dlist);

bool checkFunction(node *root);

bool bound(node *root, node *alist);

node *getVal(node *root, node *alist);

node *addPairs(node *list, node *valueList, node *old);
