#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e5 + 10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

int dfs(int v)
{
    vis[v] = true;
    for (auto w : g[v])
        if (!vis[w])
           return dfs(w);
    return 0;
}

int main()
{
}