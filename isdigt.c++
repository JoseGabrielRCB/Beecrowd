#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
    char numero('3');
    char letra('A');
    cout<< isdigit(numero) << endl << isdigit(letra)<< endl;
    return 0;
}