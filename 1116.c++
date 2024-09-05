#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (b == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            cout << setprecision(1) << fixed;
            cout << float(a)/float(b) << endl;
        }
    }
}