#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int impar(int n)
{
    if (n % 2 == 0)
    {
        return 0;
    }

    return 1;
}

int main()
{
    int n = 0;
    cin >> n;
    int cont = 6;
    for (int i = 0; i < cont; i++)
    {
        if (impar(n) == 1)
        {
            cout << n << endl;
            cont--;
        }
        n++;
        i--;
    }
    return 0;
}