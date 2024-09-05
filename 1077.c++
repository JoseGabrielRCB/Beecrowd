#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int mmc(int a, int b)
{
    int primo[4] = {2, 3, 5, 7};
    int dom = 1;
    int i = 1;
    while (1)
    {   
        if (a % primo[i] == 0 || b % primo[i] == 0)
        {
            dom *= primo[i];
            i--;
        }
        if (i > 4)
        {
            break;
        }

        i++;
    }
    return dom;
}

int main()
{
    char operador[5] = "+-/*";
    int a = 0;
    cin >> a;
    printf("YTESTE11");
    for (int i = 0; i < a; i++)
    {

        int n1, n2, n3, n4, nn, nd, rep = 0;
        char op1, op2, op3;
        cin >> n1 >> op1 >> n2 >> op2 >> n3 >> op3 >> n4;

        if (op3 == '*' || op3 == '/')
        {
            if (op3 == operador[2])
            {
                int aux = n3;
                n3 = n4;
                n4 = aux;
            }

            nn = n1 * n3;
            nd = n2 * n4;

            for (int c = 1; c < 9; c++)
                if (nn % c == 0 && nd % c == 0)
                {
                    if (rep == 0)
                    {
                        cout << nn << " / " << nd << " = ";
                    }

                    rep++;
                    nn /= c;
                    nd /= c;
                    c--;
                }
            cout << nn << "/" << nd << endl;
        }
        else
        {
            nd = n2 * n3;
            n1 *= n4;
            n3 *= n2;


            if (op3 == operador[0])
                nn = n1 + n3;
            else
                nn = n1 - n3;

            for (int c = 1; c < 9; c++)
                if (nn % c == 0 && nd % c == 0)
                {
                    
                    if (rep == 0)
                    {
                        cout << nn << " / " << nd << " = ";
                    }

                    rep++;
                    nn /= c;
                    nd /= c;
                    c--;
                }
            cout << nn << "/" << nd << endl;
        }
    }

    return 0;
}