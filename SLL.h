#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(Z) ((Z).first)

typedef char infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};


void Create_List_1302210036(List &Z );
adr newElement_1302210036(infotype x);
void insert_First_1302210036(List &Z, adr p);
void show_1302210036(List Z);
adr Delete_Last_1302210036(List &Z);
void insert_Last_1302210036(List &Z,adr p);


#endif // SLL_H_INCLUDED
