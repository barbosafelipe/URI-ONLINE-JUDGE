// uri1044.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (b % a == 0 || a % b == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }
   
    return 0;
}

