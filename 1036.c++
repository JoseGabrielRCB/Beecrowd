#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void ERRO()
{
    cout << "Impossivel calcular" << endl;
}
int main()
{
    // variavis principais
    double A, B, C, delta, baskaraPositivo, baskaraNegativo;
    cin >> A >> B >> C;

    if (A == 0.0)
    {

        ERRO();
    }
    else
    {
        delta = (B * B) - 4 * A * C;
        if (delta < 0)
        {
            ERRO();
        }
        else
        {
            baskaraPositivo = (-1*B + sqrt(delta)) / (A * 2);
            baskaraNegativo = (-1*B - sqrt(delta)) / (A * 2);
            cout << setprecision(5) << fixed;
            cout << "R1 = " << baskaraPositivo << endl;
            cout << "R2 = " << baskaraNegativo << endl;
        }
    }

    return 0;
}