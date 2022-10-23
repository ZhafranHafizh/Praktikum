#include "SLL.h"

void Create_List_1302210036(List &Z){
    first(Z) = NULL;
}

adr newElement_1302210036(infotype x){
        adr P = new element;
        info(P) = x;
        next(P) = NULL;
        return P;
    }

void insert_First_1302210036(List &Z, adr p){
    if(first(Z) == NULL){
        first(Z) = p;
    }else{
        next(p) = first(Z);
        first(Z) = p;
    }
}


void show_1302210036(List Z){
    if(first(Z) != NULL){
        adr p = first(Z);
        while (p != NULL){
            cout<<info(p)<<" ";
            p = next(p);
        }
        cout<<endl;
    }else{
        cout<< "List Kosong" << endl;
    }
}

adr Delete_Last_1302210036(List &Z){
    adr p,q;
    if (first(Z)==NULL){
        p = NULL;
        cout << "List Kosong" << endl;
        cout <<endl;
    } else if (next(first(Z))==NULL){
               p = first(Z);
               first(Z) = NULL;
    } else {
        q = first(Z);
        p = first(Z);
        while (next(p) != NULL){
            q = p;
            p = next(p);
        }
        next(q) = NULL;
    }
    return p;
}

void insert_Last_1302210036(List &Z,adr p){
    while(next(first(Z)) == NULL){
            break;
    }
    next(first(Z)) = p;
}
