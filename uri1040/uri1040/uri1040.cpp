// uri1040.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <iomanip>

using namespace std;
void mediaTotal()
{
    double n1, n2, n3, n4;
    double media, exame;

    cin >> n1 >> n2 >> n3 >> n4;
    cout << fixed << setprecision(1);
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    cout << "Media: " << media << endl;

    if (media >= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (media >= 5 && media <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;

        media = (media + exame) / 2;
        if (media >= 5)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << media << endl;
            }
        else
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << media << endl;
        }
    
    }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

    
    
}
int main()
{
    mediaTotal();

    return(0);
}

