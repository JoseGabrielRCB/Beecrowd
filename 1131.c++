#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int>::iterator it;
map<string, int> mp;

int main()
{
    // variaveis principais
    char dicionario[5][50] = {"grenais", "Inter", "Gremio", "Empates"}; // nome para o mp
    int timeVencedor = 0;

    // Inicia os mp com valor de 0 e com o seus respectivos nomes
    for (int i = 0; i < 4; i++)
    {
        mp.insert({dicionario[i], 0});
    }

    while (1)
    {
        // Variveis locais, necessitam resetar ao fim do ciclo

        int golInter, golGremio, continuarGrenal;

        // Desenvolvimento

        // faz insercao dos dados dos gols
        cin >> golInter >> golGremio;
        //faz a verificacao do vencedor
        if (golInter > golGremio)
        {
            mp[dicionario[1]] += 1;
        }
        else
        {
            mp[dicionario[2]] += 1;
        }

        if (golGremio == golInter)
        {
            mp[dicionario[3]] += 1;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        mp[dicionario[0]] += 1; // sempre que voltar e essa etapa adiciona ++contador
        cin >> continuarGrenal;

        // finiliza o loop caso 2
        if (continuarGrenal == 2)
        {
            break;
        }
    }

    // saidas finais
    cout << mp[dicionario[0]] << " grenais" << endl;
    for (int i = 1; i <= 3; i++) // imprime os gols dos times e empate
    {
        cout << dicionario[i] << ":" << mp[dicionario[i]] << endl;
    }
    if (mp[dicionario[1]] > mp[dicionario[2]]) // vaerifica o vencedor
    {
        cout << "Inter venceu mais" << endl;
    }
    else
    {
        cout << "Gremio venceu mais" << endl;
    }

    return 0;
}
