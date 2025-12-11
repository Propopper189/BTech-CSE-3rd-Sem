#include <iostream>
#include <climits>
using namespace std;

#define INF INT_MAX
int V;

void dijkstra(int graph[100][100], int source)
{
    int distance[V];
    bool visited[V];
    for(int i = 0; i < V; i++)
    {   
        distance[i] = INF;
        visited[i]= false;
    }
    distance[source] = 0;
    for(int count = 0; count < V-1; count++)
    {
        int u = -1;
        for(int i = 0; i < V; i++)
        {
            if(!visited[i] && (u == -1 || distance[i] < distance[u]))
            {
                u = i;
            }
        }
        if(u == -1)
        {
            break;
        }
        visited[u] = true;
        for(int v = 0; v < V; v++)
        {
            if(!visited[v] && graph[u][v] != INF && distance[u] != INF && distance[u] + graph[u][v] < distance[v])
            {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }
    for(int i = 0; i < V; i++)
    {
        cout<<distance[i]<<" ";
    }
}
int main()
{
    cin>>V;
    int graph[V][V];
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            cin>>graph[i][j];
            if(graph[i][j] == 0 && i != j)
            {
                graph[i][j] = INF;
            }
        }
    }
    int source;
    cin>>source;
    dijkstra(graph, source);
    return 0;
}