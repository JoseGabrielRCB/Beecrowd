#include <iostream>
#include <iomanip>
#include <map>

using namespace std;
map<int, float> PRODUTO;

int main()
{
    // variaveis principais
    int codigo, quantidade;
    float gastoTotal;
    cin >> codigo >> quantidade;
    // inserir produtos no MAP
    PRODUTO.insert({1, 4.00});
    PRODUTO.insert({2, 4.50});
    PRODUTO.insert({3, 5.00});
    PRODUTO.insert({4, 2.00});
    PRODUTO.insert({5, 1.50});
    gastoTotal = PRODUTO[codigo] * float(quantidade);
    // saidas
    cout << setprecision(2) << fixed;
    cout << "Total: R$ " << gastoTotal << endl;
}
