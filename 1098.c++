#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float I = 0.0, J = 0.0;
    float vet[3] = {1.0, 2.0, 3.0};
    int aux = 0, cont = 0, cont2 = 0;

    while (1)
    {
        J = vet[aux];
        vet[aux] += 0.2;
        cont2++;
        aux++;
        if (I == 0.0 || cont2 % 16 == 0 || cont2 % 17 == 0 || cont2 % 18 == 0 || cont2 ==33 || cont2 ==31)
        {

            cout << setprecision(0) << fixed;
        }
        else
        {

            cout << setprecision(1) << fixed;
        }
        cout << "I=" << I << " J=" << J << endl;
        cont++;

        if (cont % 3 == 0)
        {
            aux = 0;
            I += 0.2;
        }
        if (I >= 2.2)
            break;
    }

    return 0;
}