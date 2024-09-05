
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int nota[6] = {100, 50, 20, 10, 5, 2};
    int moeda[6] = {100, 50, 25, 10, 5, 1};
    float moedaf[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
    int p1;
    int p2;

    scanf("%d.%d", &p1, &p2);

    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << p1 / nota[i] << " nota(s) de R$ " << nota[i] << ".00" << endl;
        p1 %= nota[i];
    }
    cout << "MOEDAS:" << endl;
    p2+=p1*100;
    for (int i = 0; i < 6; i++)
    {
        cout << setprecision(2) << fixed;
        cout << p2 / moeda[i] << " moeda(s) de R$ " << moedaf[i] << endl;
        p2 %= moeda[i];
    }

    return 0;
}