
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


void tipoTriangulo(double c, double b, double a)
{
    

    double aux;

    aux = a;
    if (b > a )
    {
        a = b;
        b = aux;
    }
    if (c > a)
    {
        a = c;
        c = aux;
    }
   
        
        
    
     if (a >= (b + c)) {
         cout << "NAO FORMA TRIANGULO" << endl;
      }
     
     else {



         if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
         {
             cout << "TRIANGULO RETANGULO" << endl;
         }
         if ((a * a) > ((b * b) + (c * c)))
         {
             cout << "TRIANGULO OBTUSANGULO" << endl;
         }
         if ((pow(b, 2) + pow(c, 2)) > pow(a, 2)
             )
         {
             cout << "TRIANGULO ACUTANGULO" << endl;
         }
         if (a == b && b == c && c == a)
         {
             cout << "TRIANGULO EQUILATERO" << endl;
         }
         else if (a == b || b == c || c == a)
         {
             cout << "TRIANGULO ISOSCELES" << endl;
         }
     }
}
int main()
{
    double a, b, c;
    cin >> c >> b >> a;
    tipoTriangulo(c, b, a);
    return 0;
}
