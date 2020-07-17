// uri1046.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

using namespace std;

#include <iostream>

int main()
{
	/*
	min = 1 max = 24
		
	
	*/
	int relogio=24;

	int horaInicio, horaFim;

	cin >> horaInicio >> horaFim;
	
	if (horaInicio <= 23 && horaInicio >= 0 && horaFim <= 23 && horaFim >= 0)
	{

		relogio = relogio - horaInicio;
		relogio = relogio + horaFim;
		if (relogio >= 24) {
			relogio -= 24;
		}
		if (relogio == 0) {
			relogio = 24;
		}
		cout << "O JOGO DUROU " << relogio << " HORA(S)" << endl;
	}
}

