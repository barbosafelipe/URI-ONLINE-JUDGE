// uri1051.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <iomanip>

using namespace std;

void imposto(float input) {
	int porcentagem;
	float impostoDeRenda = input, impOito,impdezoito;

	cout << fixed << setprecision(2);
	//do {
		if (input <= 2000) {
			cout << "Isento\n";
			
		}
		else if (input <= 3000) {

			input -= 2000;
			impostoDeRenda = (input * 8) / 100;
			cout << "R$ " << impostoDeRenda << endl;

		}
		else if (input <= 4500) {

			input -= 3000;
			impOito = (1000 * 8) / 100;
			
			impostoDeRenda = (input * 18) / 100;
			cout << "R$ " << impostoDeRenda + impOito << endl;
		}
		else if (input > 4500) {
			input -= 4500;
			impOito = (1000 * 8) / 100;
			impdezoito = (1500 * 18) / 100;

			

			impostoDeRenda = (input * 28) / 100;
			cout << "R$ " << impOito + impostoDeRenda + impdezoito << endl;
		}
	//} while (true);
}
int main()
{
	float a;
	cin >> a;
	imposto(a);

	return 0;
}

