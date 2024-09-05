#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int>::iterator it;
map<string, int> mp;

int main()
{
    int aux = 0;
    mp.insert({"texto", 0});
    cin >>  aux;
    mp["texto"] = aux;
    cout << mp["texto"]<< endl;
}