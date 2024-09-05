#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;



void inverte(int *n1, int *n2)
{
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main()
{
    int num_1 = 0, num_2 = 0, total = 0;
    cin >> num_1 >> num_2;

    if (num_2 >num_1)
    {
        inverte(&num_1, &num_2);
    }
    
    for (int i = num_2 + 1; i < num_1;i++)
    {
        if (i%2 == 1 || i%2 == -1)
        {
            total+= i;
        }
        
        
    }
    
    cout << total << endl;
    return 0;
}