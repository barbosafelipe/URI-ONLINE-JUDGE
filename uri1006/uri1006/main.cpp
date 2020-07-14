#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    double A,B,C,media;

    cin >> A;
    cin >> B;
    cin >> C;

    media = ((A*2)+(B*3)+(C*5))/10;

    printf("MEDIA = %.1lf", media);
    printf("\n");


    return 0;
}
