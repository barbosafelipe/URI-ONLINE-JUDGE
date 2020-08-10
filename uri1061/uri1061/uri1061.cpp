

#include <iostream>
#include <string.h>

using namespace std;



int main()
{
	int dia, hora, minuto, segundo;
	string lixo;
	int diaf, horaf, minutof, segundof;

	cin >> lixo >> dia;
	cin >> hora >> lixo >> minuto >> lixo >> segundo;
	cin >> lixo >> diaf;
	cin >> horaf >> lixo >> minutof >> lixo >> segundof;

	int q1, q2, res;

	q1 = segundo + minuto * 60 + hora * 60 * 60 + dia * 60 * 60 * 24;
	q2 = segundof + minutof * 60 + horaf * 60 * 60 + diaf * 60 * 60 * 24;

	res = q2 - q1;

	cout << res / (60 * 60 * 24) << " dia(s)\n"; res = res % (60 * 60 * 24);
	cout << res / (60 * 60 ) << " hora(s)\n"; res = res % (60 * 60);
	cout << res / (60 ) << " minuto(s)\n"; res = res % (60);
	cout << res  << " segundo(s)\n"; 
	
	

}



