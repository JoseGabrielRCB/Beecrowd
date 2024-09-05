#include <iostream>
#include <string>
#include <map>
#include <ctype.h>

using namespace std;
//  for (AcessoDeChave = LetrasQuant.begin(); AcessoDeChave != LetrasQuant.end(); ++AcessoDeChave)
//             cout << AcessoDeChave -> first << "= " << AcessoDeChave->second << endl;

int main()
{
    int Loop = 0;
    cin >> Loop;

    for (int i = 0; i < Loop; i++)
    {
        map<char, int> LetrasQuant; // cria dicionario
        map<char, int>::iterator AcessoDeChave;
        
        int cont = 0, primeiroMaior = -999, segundoMaior = -999;
        char maiorLetra, segundaLetra,aux;
        string entrada;
        cin.ignore();           
        getline(cin, entrada);
        cout << entrada << endl;
        char arrayEntrada[entrada.length()];
        for (int i = 0; i < int(entrada.length()); i++)
        {
            int teste = 0;
            int existe = 0;
            while (1)
            {
                arrayEntrada[i] = aux = tolower(entrada[i]);
                if (isdigit(arrayEntrada[i]) == 1 || arrayEntrada[i] == ' ')
                    i++;
                if(i == int(entrada.length()) || isdigit(aux)== 0)
                    break;
                cout << "teste:" << teste++ << endl;
            }

            for (AcessoDeChave = LetrasQuant.begin(); AcessoDeChave != LetrasQuant.end(); ++AcessoDeChave)
                if (AcessoDeChave->first == arrayEntrada[i])
                {
                    existe = 1;
                    LetrasQuant[arrayEntrada[i]]++;
                }
            if (existe == 0)
            {
                LetrasQuant.insert({arrayEntrada[i], 1});
                cont++;
            }
        }
        for (AcessoDeChave = LetrasQuant.begin(); AcessoDeChave != LetrasQuant.end(); ++AcessoDeChave)
        {
            if (LetrasQuant[AcessoDeChave->first] >= primeiroMaior)
            {
                primeiroMaior = AcessoDeChave->second;
                maiorLetra = AcessoDeChave->first;
                cont--;
            }
            if (LetrasQuant[AcessoDeChave->first] < primeiroMaior && LetrasQuant[AcessoDeChave->first] > segundoMaior)
            {
                segundoMaior = AcessoDeChave->second;
                segundaLetra = AcessoDeChave->first;
            }
        }
        if (cont != 0)
        {
            for (AcessoDeChave = LetrasQuant.begin(); AcessoDeChave != LetrasQuant.end(); ++AcessoDeChave)
                cout << AcessoDeChave->first << "= " << AcessoDeChave->second << endl;
          //  cout << maiorLetra << " " << segundaLetra;
        }
    }
}