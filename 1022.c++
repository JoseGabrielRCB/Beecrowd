
#include <iostream>

using namespace std;

int simpli(int num, int den)
{
    if (den == 0)
    {
        return num;
    }
    return simpli(den, num % den);
}

void inverte(int *n1, int *n2)
{
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main()
{

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int DN, aux;
        int NM;
        int n[5];
        char op[4];
        cin >> n[1] >> op[1] >> n[2] >> op[2] >> n[3] >> op[3] >> n[4];

        if (op[2] == '-')
        {
            
            DN = n[2] * n[4];
            NM = n[1] * n[4] - n[3] * n[2];

            cout << NM << "/" << DN << " = ";
            aux = NM / simpli(NM, DN);
            DN /= simpli(NM, DN);

            if (DN < 0)
            {
                DN *= -1;
                aux *= -1;
            }
            
            

            cout << aux << "/" << DN << endl;
           
        }
        if (op[2] == '+')
        {

            DN = n[2] * n[4];
            NM = n[1] * n[4] + n[3] * n[2];
            cout << NM << "/" << DN << " = ";
            aux = NM / simpli(NM, DN);
            DN /= simpli(NM, DN);
            if (DN < 0)
            {
                DN *= -1;
                aux *= -1;
            }
            

            cout << aux << "/" << DN << endl;
        }
        if (op[2] == '*')
        {
            DN = n[2] * n[4];
            NM = n[1] * n[3];
            cout << NM << "/" << DN << " = ";
            aux = NM / simpli(NM, DN);
            DN /= simpli(NM, DN);
            if (DN < 0)
            {
                DN *= -1;
                aux *= -1;
            }
            

            cout << aux << "/" << DN << endl;
            
        }
        if (op[2] == '/')
        {
            inverte(&n[3], &n[4]);
            DN = n[2] * n[4];
            NM = n[1] * n[3];
            cout << NM << "/" << DN << " = ";
            aux = NM / simpli(NM, DN);
            DN /= simpli(NM, DN);
            if (DN < 0)
            {
                DN *= -1;
                aux*= -1;
            }
            

            cout << aux << "/" << DN << endl;
            
        }
    }

    return 0;
}