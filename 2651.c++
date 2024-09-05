#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
    char textoDeEntrada[100001];
    string textoDeEntradaMinusculo;
    char zelda[6] = "zelda";
    cin >> textoDeEntrada;
    for (int i = 0; i < strlen(textoDeEntrada); i++)
        textoDeEntrada[i] = tolower(textoDeEntrada[i]);
    textoDeEntradaMinusculo = textoDeEntrada;
    if (textoDeEntradaMinusculo.find(zelda) != string::npos)
        cout << "Link Bolado" << endl;
    else
        cout << "Link Tranquilo" << endl;
    return 0;
}