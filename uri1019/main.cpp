#include <iostream>

using namespace std;

int main()
{
    //Leia um valor inteiro, que é o tempo de duração em segundos
    int seg;
    int horas, minutos, segundos;

    cin >> seg;

    minutos = seg/60;

    segundos = seg%60;
    horas = 0;

    if(minutos >60){
        horas = minutos/60;
        minutos = minutos%60;

    }
    cout << horas << ":" << minutos <<":" << segundos  << endl;
    return 0;
}
