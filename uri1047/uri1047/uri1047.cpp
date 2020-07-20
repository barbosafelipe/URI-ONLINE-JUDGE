using namespace std;

#include <iostream>

int main()
{

	int relogio ;
	int minutoInicial, minutoFinal, minuto;
	int horaInicio, horaFim;

	cin >> horaInicio >> minutoInicial >> horaFim >> minutoFinal;

	if (horaInicio <= 23 && horaInicio >= 0 && horaFim <= 23 && horaFim >= 0 && 
		minutoInicial < 60 && minutoInicial >= 0 && minutoFinal < 60 && minutoFinal >= 0 )
	{	
		minuto = (60 - minutoInicial) + minutoFinal;
		
		//10 12 10 11
		relogio = (24 - horaInicio) + horaFim;
		//relogio = relogio + horaFim;

		if (minuto >= 60) {
			//relogio++;
			minuto = minuto -= 60;
		}
		else {
			relogio--;
		}
		
		
		if (relogio >= 24) {
			relogio -= 24;
		}
		if (horaInicio == horaFim && horaFim == horaInicio
			&& minutoFinal == minutoInicial && minutoInicial == minutoFinal) {
			relogio = 24;
		}
		
			
		cout << "O JOGO DUROU " << relogio << " HORA(S)" << " E "<< minuto <<" MINUTO(S)" << endl;
	}
}

