// uri1038.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <iomanip>

using namespace std;



void lanche(int a, int e)
{
    
    float lanches[] = {  0, 4.00, 4.50, 5.00, 2.00, 1.50  };
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << lanches[a] * e << endl;
}
int main()
{
    int ped,quant;
    cin >> ped >> quant;
   
    lanche(ped, quant);
    
}
