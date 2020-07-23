

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void animais(char animal[15], char tipo[15], char tipo1[15]) {
    char vertebrado[15] = "vertebrado", ave[15] = "ave", mamifero[15] = "mamifero",
        carnivoro[15] = "carnivoro", onivoro[15] = "onivoro", herbivoro[15] = "herbivoro";


    char invertebrado[15] = "invertebrado", inseto[15] = "inseto", anelideo[15] = "anelideo",
        hematofago[15] = "hematofago";
   
    if (strcmp(animal, vertebrado) == 0) {
        if (strcmp(tipo, ave) == 0) {
            if (strcmp(tipo1, carnivoro) == 0) {
                cout << "aguia" << endl;
            }
            else if (strcmp(tipo1, onivoro) == 0) {
                    cout << "pomba" << endl;
            }


        }
        if (strcmp(tipo, mamifero) == 0) {
            if (strcmp(tipo1, onivoro) == 0) {
                cout << "homem" << endl;
            }
            else if (strcmp(tipo1, herbivoro) == 0) {
                    cout << "vaca" << endl;
            }
        }
    }

    if (strcmp(animal, invertebrado) == 0) {
        if (strcmp(tipo, inseto) == 0) {
            if (strcmp(tipo1, hematofago) == 0) {
                cout << "pulga" << endl;
            }
            else if (strcmp(tipo1, herbivoro) == 0) {
                 cout << "lagarta" << endl;
            }
        }
        if (strcmp(tipo, anelideo) == 0) {
            if (strcmp(tipo1, hematofago) == 0) {
                cout << "sanguessuga" << endl;
            }
            else if (strcmp(tipo1, onivoro) == 0) {
                  cout << "minhoca" << endl;
            }
        }
    }


}
int main()
{
    char a[15], b[15], c[15];
    cin >> a;
    cin >> b;
    cin >> c;
    animais(a, b, c);
}

