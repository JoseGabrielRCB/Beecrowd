#include <iostream>
#include <iomanip>

using namespace std;

void ERRO()
{
    cout << "nota invalida" << endl;
}

int main()
{
    int stop = 0;
    float media = 0;
    while (1)
    {
        float nota;
        cin >> nota;

        if (nota < 0.0)
        {
            ERRO();
        }
        else if (nota > 10.0)
        {
            ERRO();
        }
        else
        {
            media += nota;
            stop++;
        }
        if (stop == 2)
        {
            cout << setprecision(2) << fixed;
            cout << "media = " << media / 2 << endl;
            break;
        }
    }

    return 0;
}