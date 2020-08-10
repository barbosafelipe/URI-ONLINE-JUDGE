
#include <iostream>

using namespace std;
int main()
{
	int i, ent[5], pares=0;
	for (i = 0; i < 5; i++) {
		cin >> ent[i];
		if (ent[i] % 2 == 0) {
			pares++;
		}
	}
	cout << pares << " valores pares\n";
}
