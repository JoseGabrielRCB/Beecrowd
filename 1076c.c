#include <stdio.h>
#include <string.h>

#define TAM 50
int g[TAM][TAM];
int v[TAM];

void dfs(int u, int vertices)
{
    v[u] = 1;
    for (int i = 0; i < vertices; i++)
        if (g[u][i] == 1 && v[i] == 0)
            dfs(i);
}
int main()
{
    memset(g, 0, sizeof(g));
    memset(v, 0, sizeof(v));
    int teste;
    scanf("%d", &teste);
    for (int i = 0; i < teste; i++)
    {
        int inicio, vertice, aresta;
        scanf("%d", &inicio);
        scanf("%d %d", &vertice, &aresta);
        for (int a = 0; a < aresta; a++)
        {
            int origem, dest;
            scanf("%d %d", &origem, &dest);
            g[origem][dest] = 1;
        }
    }
}