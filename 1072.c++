#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n = 0, in = 0, out = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        if (x >= 10 && x <= 20)
            in++;
        else
            out++;
    }
    cout << in << " in" << endl << out << " out"<< endl;

    return 0;
}