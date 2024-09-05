#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 60;

    while (1)
    {

        cout << "I=" << i << " J=" << j << endl;
        i += 3;
        j -= 5;
        if (j == 0)
        {
            cout << "I=" << i << " J=" << j << endl;
            break;
        }
    }

    return 0;
}