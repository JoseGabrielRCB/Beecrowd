#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= 10; i++)
        cout << i << " x " << n << " = " << n * i << endl;
    return 0;
}