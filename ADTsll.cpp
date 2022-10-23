#include "ADTsll.h"

void CreateList_1302210036(List &L){
    first(L) = NULL;
}

adr CreateNewElement_1302210036(infotype X){
        adr P = new element;
        info(P) = X;
        next(P) = NULL;
        return P;
}

void InsertLast_1302210036(List &L, adr P){
    if (L.first == NULL){
        L.first = P;
    } else {
        adr Q;
        Q = L.first;
        while (Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void ShowAllData_1302210036(List L){
    if(first(L) != NULL){
        adr P = first(L);
        while (P != NULL){
            cout<<info(P)<<" ";
            P = next(P);
        }
        cout<<endl;
    }else{
        cout<<"List Kosong"<<endl;
    }
}

void menu_1302210036(){
        List L;
    adr P;
    CreateList_1302210036(L);
    int choice;
    int newData;
    int total = 0;
        do{
                cout << "======MENU=======" << endl;
                cout << "1. Menambah N data baru\n2. Menampilkan semua data\n3. Menampilkan data terbesar\n4.Menampilkan data tengah\n0. Exit" << endl;;
                cout << "Masukkan Menu :";
        cin >> choice;
                        switch(choice){
        case 1:
                        cout << "Jumlah data yang akan ditambahkan: ";
                cin >> total;
                while (total >0){
                    cout << "Masukkan data baru:";
                    cin >> newData;
                    P = CreateNewElement_1302210036(newData);
                    InsertLast_1302210036(L,P);
                    total--;
                }
        break;
        case 2:
                    ShowAllData_1302210036(L);
                        break;
        case 3:
            adr Max;
            cout << "Data terbesar adalah :" << findmax_1302210036(L)<< endl;
            break;
        case 4:
            showMiddle(L);
            }
        }while(choice != 0);
        }


int findmax_1302210036(List L){
    int Max = 0;
    adr Q;;
    Q = L.first;
    while (Q != NULL){
        if(Max < Q->info){
            Max = Q->info;
        }
        Q = Q->next;
    }
    return Max;
}


void showMiddle(List L){
    adr Q = L.first;
    if (Q == NULL || Q->next == NULL){
        cout<<"Data Kosong"<<endl;
    }
    adr Q1 = Q;
    adr Q2 = Q->next;
    while (Q2 != NULL){
        Q2 = Q2->next;
        if (Q2 != NULL){
            Q2 = Q2->next;
        }
        Q1 = Q1->next;
    }
    cout<<"Data Tengah: "<< Q1->info<<endl;
}
