#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        int a;
        cin >> a;
        if (a == 2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
        {
            cout << "Senha Invalida" << endl;
        }
    }
}