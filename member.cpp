#include "member.h"

void inputData_1302210036 (member &MB){
    int k = 0;
    cout <<"Tuliskan IDNumber :";
    cin >> MB.IDNumber;

    while(k < Max) {
        cout <<"Point Bulan Ke-"<< k+1 << ": ";
        cin >> MB.Point[k];
        k++;
    }
}

double ratarata_1302210036(member MB) {
    float total;

    for (int i = 0; i < Max ; i++) {
        total += MB.Point[i];
    }
    return total / Max;
}

void showData(member MB) {
    cout<<endl;
    cout<<"Data Member :"<<endl;
    cout<<"IDNumber: "<<MB.IDNumber<<endl;
    cout<<"point:";
    for(int i = 0; i<Max; i++){
        cout<<" " <<MB.Point[i];
    }
    cout<<endl;
}

