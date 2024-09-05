#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <map>
#include <iostream>

using namespace std;

map<string, double> mp; // indice VALOR
map<string, double>::iterator it;



//FUNCIONANDO
// 1281

int main()
{
    double pp = 0.0;
    int n, m;
    int p;
    string produto;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        double total = 0.0; //reinicia total
        scanf("%d", &m);
        for (int a = 1; a <= m; a++) //INSERE produtos/valor
        {
            cin >> produto >> pp; //leitura
            mp.insert({produto, pp}); //insere o valor no MP
        }
        scanf("%d", &p);
        for (int a = 1; a <= p; a++) //insere PRODUTO/QAUNT DE COMPRA
        {
            double aux = 0.0;
            cin >> produto >> aux; //LEitura
            total += mp[produto] * aux ;
        }

        printf("R$ %.2lf\n", total);
        mp.clear(); //limpa o MP
    }

    return 0;
}