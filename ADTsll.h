#ifndef ADTSLL_H_INCLUDED
#define ADTSLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

typedef int infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};


void CreateList_1302210036(List &L);
adr CreateNewElement_1302210036(infotype X);
void InsertLast_1302210036(List &L, adr P);
void ShowAllData_1302210036(List L);
int findmax_1302210036(List L);
void showMiddle(List L);
void menu_1302210036();

#endif // ADTSLL_H_INCLUDED
