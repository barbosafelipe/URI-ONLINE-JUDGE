#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char vendedor[100];
    double salFixo,totVendas,total;

    cin >> vendedor ;
    cin >> salFixo;
    cin >> totVendas;

    total = salFixo + (0.15*totVendas);

    printf("TOTAL = R$ %0.2lf",total);
    printf("\n");

    return 0;
}
