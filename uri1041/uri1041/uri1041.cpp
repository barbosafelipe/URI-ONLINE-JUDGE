// uri1041.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

void cordenadas(float x, float y)
{
    //float q1, q2, q3, q4;
    if (x == 0 && y == 0)
    {
        cout << "Origem" << endl;
    }
    if (x > 0 && y > 0)
    {
        cout << "Q1" << endl;
    }
    if (x < 0 && y > 0)
    {
        cout << "Q2" << endl;
    }
    if (x < 0 && y < 0)
    {
        cout << "Q3" << endl;
    }
    if (x > 0 && y < 0)
    {
        cout << "Q4" << endl;
    }
    else if (x == 0 && y != 0 )
    {
        cout << "Eixo Y" << endl;
    }
    else if (x != 0 && y == 0)
    {
        cout << "Eixo X" << endl;
    }

}
int main()
{
    float x, y;
    cin >> x >> y;

    cordenadas(x, y);
    return 0;
}
