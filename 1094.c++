#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <map>

using namespace std;

map<char, int> mp;
map<char, int>::iterator it;

int main()
{
    int n;
    cin >> n;
    int cont = 0;
    char insere[4] = "CRS";
    for (int i = 0; i < strlen(insere); i++)
        mp.insert({insere[i], 0});

    for (int i = 0; i < n; i++)
    {
        int quant;
        char animal;

        cin >> quant >> animal;
        cont += quant;
        mp[animal] += quant;
    }

    cout << "Total: " << cont << " cobaias" << endl;

    cout << "Total de coelhos: " << mp['C'] << endl;

    cout << "Total de ratos: " << mp['R'] << endl;

    cout << "Total de sapos: " << mp['S'] << endl;

    cout << setprecision(2) << fixed;
    cout << "Percentual de coelhos: " << float(mp['C'] * 100 )/ cont << " %" << endl;

    cout << "Percentual de ratos: " << float(mp['R'] * 100 )/ cont << " %" << endl;

    cout << "Percentual de sapos: " << float(mp['S'] * 100 )/ cont << " %" << endl;
    return 0;
}