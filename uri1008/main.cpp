#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int num,hort;
    float Vhora,sal;

    cin >> num;
    cin >> hort;
    cin >> Vhora;

    sal = (Vhora*hort);

    printf("NUMBER = %d",num);
    printf("\n");
    printf("SALARY = U$ %0.2f",sal);
    printf("\n");





    return 0;
}
