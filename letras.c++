#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> DicionarioDeLetras;
map<char, int>::iterator AcessoDeChave;

int lixo(char chave)
{
    string lixo(".,-_%;:!@#$*()|");
    for (int i = 0; i < lixo.length(); i++)
        if (chave == lixo[i])
            return 1;
    return 0;
}
int VerificaNoDicionario(char chave)
{
    for (AcessoDeChave = DicionarioDeLetras.begin(); AcessoDeChave != DicionarioDeLetras.end(); ++AcessoDeChave)
        if (AcessoDeChave->first == chave)
            return 1;
    return 0;
}

int main()
{
    system("clear");
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // variaveis
        string entrada;
        cin.ignore();
        getline(cin, entrada);
        for (int a = 0; a < entrada.length(); a++)
        {
            while (entrada[a] == ' ' || isdigit(entrada[a]) == 1 || lixo(entrada[a]) == 1)
                a++;
            if (VerificaNoDicionario(entrada[a]) == 0)
                DicionarioDeLetras.insert({entrada[a], 1});
            else
                DicionarioDeLetras[entrada[a]]++;
        }
        for (AcessoDeChave = DicionarioDeLetras.begin(); AcessoDeChave != DicionarioDeLetras.end(); AcessoDeChave++)
            cout << AcessoDeChave->first << "= " << AcessoDeChave->second << endl;
    }

    return 0;
}