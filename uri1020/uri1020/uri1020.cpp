

    #include <iostream>

    using namespace std;


    void idade() 
    {

        int ano = 365;
        int dias=0, anos = 0, meses = 0, dia = 0;
        cin >> dias;
        while (dias != 0)
        {
            if (dias >= ano) {
                dias -= 365;
                anos++;

            }



            else if (dias >= 30) {
                dias -= 30;
                meses++;
            }

            else if (dias > 0) {

                dia = dias;
                dias -= dia;


            }
        

        }
        cout << anos << " ano(s)" << endl;
        cout << meses << " mes(es)" << endl;
        cout << dia << " dia(s)" << endl;
    }
    int main()
    {
        idade();
        return 0;
    }
