#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        cin >> a;
        if (a != 0)
        {
            if (a % 2 != 0)
                cout << "ODD";
            else
                cout << "EVEN";
            if (a > 0)
                cout << " POSITIVE" << endl;
            else
                cout << " NEGATIVE" << endl;
        }

        if (a == 0)
            cout << "NULL" << endl;
    }
    return 0;
}