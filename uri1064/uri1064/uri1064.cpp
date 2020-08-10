
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float ent[6], media=0;
    int  cont = 0;

    
    for (int i = 0; i < 6; i++) {
        cin >> ent[i];
        if (ent[i] > 0) {
            cont++;
            media += ent[i];
        }
    }
    
    media = media / cont;

    cout << cont << " valores positivos\n";
    cout << fixed << setprecision(1);
    cout << media << endl;

    return 0;
}

