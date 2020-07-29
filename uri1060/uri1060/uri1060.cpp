
#include <iostream>

using namespace std;

int main()
{
	float j[6];
	int positivo=0;
	 
	for (int i = 0; i < 6; i++) {
		cin >> j[i];
		if (j[i] > 0) {
			positivo++;
		}
	}
	cout << positivo << " valores positivos\n";
}

