
#include <iostream>

using namespace std;

int maior(int a, int b)
{
    if (a < b)
    {
        return b;
    }

    return a;
}

int menor(int a, int b)
{
    if (a > b)
    {
        return b;
    }

    return a;
}

int main()
{
    int n, m, c1, c2, c3;
    cin >> n >> m;

    int mat[n][n]; // forma matrix

    // U = cidade 1
    // v = cidade 2
    // W = distancia

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = 1000000;

    for (int i = 0; i < n; i++) // inciliza a diagonal da matrix
        mat[i][i] = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> c1 >> c2 >> c3;
        mat[c1][c2] = mat[c2][c1] = c3;
    }

    for (int k = 0; k < n; k++) // preenche a matrix
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (mat[i][j] > mat[i][k] + mat[k][j])
                    mat[i][j] = mat[i][k] + mat[k][j];

    //// minha resolução
    int distMin = 100000;
    for (int i = 0; i < n; i++)
    {
        int distMax = 0;
        for (int j = 0; j < n; j++)
        {

            distMax = maior(mat[i][j], distMax);
        }
        distMin = menor(distMax, distMin);
    }

    cout << distMin << endl;

    return 0;
}
