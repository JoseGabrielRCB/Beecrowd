#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int quantDeSaida = 0;
    cin >> quantDeSaida;
    for (int i = 0; i < quantDeSaida; i++)
    {
        int quantDeLinhas = 0, hast = 0;
        cin >> quantDeLinhas;
        char matrixSequencia[quantDeLinhas][101];
        for (int c = 0; c < quantDeLinhas; c++)
        {
            cin >> matrixSequencia[c];
            for (int b = 0; b < strlen(matrixSequencia[c]); b++)
                hast += matrixSequencia[c][b] + c + b - 65;

    
        }
        cout << hast << endl;
    }

    return 0;
}