#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        int a, b;
        cin >> b >> a;
        if (a == 0 || b == 0)
        {
            break;
        }
        if (a > 0 && b > 0)
        { 
            cout << "primeiro" << endl;
        }
        if (a > 0 && b < 0)
        {
            cout << "segundo" << endl;
        }
        if (a < 0 && b < 0)
        {
            cout << "terceiro" << endl;
        }
        if (a < 0 && b > 0)
        {
            cout << "quarto" << endl;
        }
    }

    return 0;
}