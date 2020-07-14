// uri1021b.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main()
{
	double valor  ;
	int nota1;
	cout << fixed << setprecision(2);
	cin >> valor;

	

	double cedulas[6] = { 100, 50, 20, 10, 5, 2 };
	//double moedas[6] = { 1,  0.50, 0.25, 0.10, 0.05, 0.01};
	int cont, valor1;
	

	cout << "NOTAS:" << endl;

	for (int i = 0; i < 6; i++)
	{
		cont = (valor / cedulas[i]);
		cout << cont << " nota(s) de R$ " << cedulas[i] << endl;
		valor -= cont * cedulas[i];
		
	}



	cout << "MOEDAS:" << endl;

	nota1 = valor * 100;

	cout << nota1 / 100 << " moeda(s) de R$ 1.00" << endl;
	cout << (nota1 % 100) / 50 << " moeda(s) de R$ 0.50" << endl;
	nota1 = (nota1 % 100) % 50;
	cout << nota1 / 25 << " moeda(s) de R$ 0.25" << endl;
	
	cout << (nota1 % 25)/10  << " moeda(s) de R$ 0.10" << endl;
	nota1 = (nota1 % 25) % 10;
	cout << nota1 / 5  << " moeda(s) de R$ 0.05" << endl;
	cout << nota1 % 5 << " moeda(s) de R$ 0.01" << endl;

	
	

	return 0;
}
