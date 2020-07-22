
#include <iostream>
#include <iomanip>

using namespace std;

double salario;

void aumentoSal(double salario)
{
    int percentual;
    double  reajuste, novoSalario;
    cout << fixed << setprecision(2);
    //400 15%
    if (salario <= 400.00) {
        percentual = 15;
        reajuste = (salario * 15) / 100;
        novoSalario = reajuste + salario;
    }
    else if (salario <= 800) {
        percentual = 12;
        reajuste = (salario * 12) / 100;
        novoSalario = reajuste + salario;
    }
    else if (salario <= 1200) {
        percentual = 10;
        reajuste = (salario * 10) / 100;
        novoSalario = reajuste + salario;
    }
    else if (salario <= 2000) {
        percentual = 7;
        reajuste = (salario * 7) / 100;
        novoSalario = reajuste + salario;
    }
    else if (salario > 2000) {
        percentual = 4;
        reajuste = (salario * 4) / 100;
        novoSalario = reajuste + salario;
    }

    
    cout << "Novo salario: " << novoSalario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;
    

}
int main()
{
    cin >> salario;
    aumentoSal(salario);

    return 0;
}
