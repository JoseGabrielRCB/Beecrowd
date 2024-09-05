#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int quant = 0;
        int a, b;
        cin >> a >> b;

        if (a < b || a == b)
        {
            b += a;
            a = b - a;
            b -= a;
        }

        if (a != b)
        {

            while (1)
            {
                b++;

                if (b == a)
                {
                    break;
                }
                if (b % 2 != 0)
                {
                    quant += b;
                }
            }
        }

        cout << quant << endl;
    }

    return 0;
}