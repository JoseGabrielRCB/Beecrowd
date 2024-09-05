#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7, cont = 0, vet = 0;
    int sequ[3] = {7, 6, 5};
    while (1)
    {
        j = sequ[vet];
        vet++;
        cout << "I=" << i << " J=" << j << endl;
        cont++;

        if (cont % 3 == 0)
        {
            i += 2;
            vet = 0;
        }
        if (i > 9)
        {
            break;
        }
    }

    return 0;
}