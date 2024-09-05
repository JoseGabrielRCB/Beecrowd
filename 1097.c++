#include <iostream>

using namespace std;

int main()
{
    int I = 1, J, aux = 0, cont = 0;
    int vet[3] = {7, 6, 5};

    while (1)
    {
        J = vet[aux];
        vet[aux] += 2;
        aux++;
        cout << "I=" << I << " J=" << J << endl;
        cont++;
        if (cont % 3 == 0)
        {
            I += 2;
            aux = 0;
        }
        if (I > 9)
            break;
    }
}