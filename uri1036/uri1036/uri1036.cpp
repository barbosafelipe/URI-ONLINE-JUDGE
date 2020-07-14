// uri1036.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdexcept>

using namespace std;
void baskara()
{   
    double A, B, C;
    double R1, R2, delta;
    cin >> A >> B >> C;
  
    // Formula de Baskara
    
        delta = (pow(B, 2) - 4 * A * C);
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);

        if (delta < 0 || A == 0) {
            cout << "Impossivel calcular" << endl;
        }
          
        else 
        {
        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
        }   
 
}
int main()
{
    baskara();

    return 0;
}

