#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    const double pi=3.14159;
    double A,B,C;

    cout << fixed << setprecision(1);
    cin >> A >> B >> C;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (A*C)/2 << endl;
    cout << "CIRCULO: " << pi*pow(C,2) << endl;
    cout << "TRAPEZIO: " << ((A+B)/2)*C << endl;
    cout << "QUADRADO: " << B*B << endl;
    cout << "RETANGULO: " << A*B << endl;


    /*
    printf("TRIANGULO: %0.3lf\n", (A*C)/2);
    printf("CIRCULO: %0.3lf\n", pi*pow(C,2));
    printf("TRAPEZIO: %0.3lf\n", ((A+B)/2)*C);
    printf("QUADRADO: %0.3lf \n", B*B);
    printf("RETANGULO: %0.3lf", A*B);
    printf("\n");
    */



    return 0;
}
