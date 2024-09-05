#include <iostream>

using namespace std;

int main()
{

    while (1)
    {
        int a, b, quant = 0;
        cin >> a >> b;
        if (a <= 0 || b <= 0)
        {
            break;
        }
        if (a < b)
        {
            b += a;
            a = b - a;
            b -= a;
        }

        while (1)
        {
            cout << b << " ";
            quant += b;
            b++;
            if (b > a)
            {
                break;
            }
        }
        cout << "Sum=" << quant << endl;
    }

    return 0;
}