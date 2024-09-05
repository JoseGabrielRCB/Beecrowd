
#include <iostream>

using namespace std;

int main()
{

    int n, min = 0, hora = 0;
    cin >> n;

    hora = n / 3600;
    n %= 3600;
    min = n / 60;
    n %= 60;

    cout << hora << ":" << min << ":" << n<< endl;

    return 0;
}