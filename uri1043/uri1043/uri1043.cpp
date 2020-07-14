

#include <iostream>
#include <iomanip>

using namespace std;
void triangulo(float a, float b, float c)
{
    float area;
    area = ((a + b) * c) / 2;
    cout << fixed << setprecision(1);

    if (( b - c ) < a && (b - c) < b + c
        && ( a - c ) < b && (b- c)< a + c
        && (a - b)  < c && (a - b) < a + b)
    {
        cout << "Perimetro = " << a + b + c << endl;
    }
    else
    {

        cout << "Area = " << area << endl;
    }
}
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    triangulo(a, b, c);
}
