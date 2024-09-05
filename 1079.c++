#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float a,b,c;
        cin >> a >> b >> c;
        a = (2*a + 3*b + c *5)/10;
        cout << setprecision(1) << fixed;
        cout << a << endl;
    }
    
    
}