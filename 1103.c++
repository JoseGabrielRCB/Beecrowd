#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            break;
        }

        if (a > b)
        {
            cout << "Decrescente" << endl;
        }
        else
        {
            cout << "Crescente" << endl;
        }
    }

    return 0;
}