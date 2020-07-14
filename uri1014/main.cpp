#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    //entrada X representando distancia pecorrida em KM
    int X;

    // entrada y representando o total de combustivel gasto.
    float  Y, Kml;

    cin >> X;
    cin >> Y;

    Kml = X/Y;

    //saida do consumo médio combustivel cm 3 casas após vírgula
    cout << fixed << setprecision(3);
    cout << Kml << " km/l"<< endl;
    return 0;
}
