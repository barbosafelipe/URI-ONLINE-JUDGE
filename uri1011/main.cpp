#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    const double pi = 3.14159;
    double raio,volume;

    cin >> raio;

    volume = (4/3.0)*pi*pow(raio,3);

    printf("VOLUME = %0.3lf",volume);
    printf("\n");

    return 0;
}
