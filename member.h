#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED

#include <iostream>

using namespace std;

const int Max = 6;

struct member{
    string IDNumber;
    double Point[Max];
};

void inputData_1302210036 (member &MB);
double ratarata_1302210036 (member MB);
void showData (member MB);


#endif // MEMBER_H_INCLUDED
