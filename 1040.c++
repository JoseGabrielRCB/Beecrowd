#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // variaveis principais
    float nota_1, nota_2, nota_3, nota_4, media, notaExame;
    cin >> nota_1 >> nota_2 >> nota_3 >> nota_4;
    // aplicacao de pesos nas notas

    media = (nota_1 * 2 + nota_2 * 3 + nota_3 * 4 + nota_4 * 1) / 10.0;
    cout << "Media: " << setprecision(1) << fixed << media << endl;
    if (media >= 7.0)
    {
        cout << "Aluno Aprovado." << endl;
    }
    if (media < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    if (media >= 5.0 && media <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> notaExame;
        media = (notaExame + media) / 2;

        cout << "Nota do exame: " << setprecision(1) << fixed <<  notaExame << endl;
        if (media >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << setprecision(1) << fixed << media << endl;
    }
    return 0;
}