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
    float media = 0.0;
    while (stop != 2)
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
            while (1)
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> stop;
                if (stop == 2 || stop == 1)
                {
                    break;
                }
            }
            if (stop == 1)
            {
                stop = 0;
                media = 0.0;
            }
        }
    }

    return 0;
}