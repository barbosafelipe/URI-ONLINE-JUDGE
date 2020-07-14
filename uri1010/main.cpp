#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cod1,cod2,numP1,numP2;
    double valorP1,valorP2,total;

    cin >> cod1 >> numP1 >> valorP1;
    cin >> cod2 >> numP2 >> valorP2;

    total = (numP1*valorP1)+(numP2*valorP2);

    printf("VALOR A PAGAR: R$ %0.2lf",total);
    printf("\n");



    return 0;
}
