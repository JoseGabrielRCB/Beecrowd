#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ano = n / 365;
    n %= 365;
    int mes = n / 30;
    n %= 30;

    cout << ano << " ano(s)" << endl << mes << " mes(es)" << endl << n << " dia(s)" << endl;
}