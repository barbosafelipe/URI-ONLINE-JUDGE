#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float kmL=12;
    int tempo, kmH;
    float litros;

    cin >> tempo;
    cin >> kmH;

    litros = (tempo * kmH)/kmL;

    cout << fixed << setprecision(3);
    cout << litros << endl;
    return 0;
}
