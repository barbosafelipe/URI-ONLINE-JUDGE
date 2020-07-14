// uri1037.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void intervalo(float ent) {
	
   
	if (ent >= 0 && ent <= 25.0000)
	{	
		cout << "Intervalo [0,25]" << endl;
	}
	else if (ent > 25.0 && ent <= 50.0) {

		cout << "Intervalo (25,50]" << endl;
	}
	else if (ent > 50.0 && ent <= 75.0) {
		
		cout << "Intervalo (50,75]" << endl;
	}
	else if (ent > 75.0 && ent <= 100.0)
	{
		cout << "Intervalo (75,100]" << endl;
	}
	else {
		cout << "Fora de intervalo" << endl;
	}

}
int main()
{
	float i;
	cin >> i;

	intervalo(i);
	return 0;
}
