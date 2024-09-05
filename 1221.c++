#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int teste;
    cin >> teste;
    for (int i = 0; i < teste; i++)
    {
        int primo = 0;
        long long num;
        cin >> num;
        for (long long a = 2; a * a < num; a++)
            if ((num % a) == 0)
                primo = 1;
        if (primo == 1)
            cout << "Not Prime" << endl;
        else
            cout << "Prime" << endl;
    }
}
